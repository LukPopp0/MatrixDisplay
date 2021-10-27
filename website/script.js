'use strict';

let config = {
    selectedImage: 1,
    fps: 4,
    brightness: 127,
};

let dataUpdateTimeout = null;

function init() {
    updateUIElements();
    loadConfiguration();
}

function loadConfiguration() {
    let xhttp = new XMLHttpRequest();
    xhttp.open('GET', document.URL + 'config', true);
    xhttp.onreadystatechange = function() {
        if (this.readyState == 4 && this.status == 200) {
            response = JSON.parse(xhttp.responseText);

            try {
                config.selectedImage = parseInt(response.selectedImage);
                config.fps = parseInt(response.fps);
                config.brightness = parseInt(response.brightness);
            } catch {
                showSnackbar('Failed to read data.')
            }

            updateUIElements();
        }
    }
}

function sendDataUpdate() {
    // clear existing timeout and set new one to send only every 200 ms
    clearTimeout(dataUpdateTimeout);
    dataUpdateTimeout = setTimeout(() => {
        showSnackbar('Sending data update.');

        // generate url string from the config object
        let urlString = generateUrlString();

        const replacedString = document.URL
            .replace('index.html', '')
            .replace('generate_204', '')
            .replace('gen_204', '');

        let xhttp = new XMLHttpRequest();
        xhttp.open('POST', replacedString + 'update', true);
        xhttp.setRequestHeader('Content-Type', 'application/x-www-form-urlencoded');
        xhttp.onreadystatechange = function () {
            if (this.readyState == 4 && this.status == 200) {
                showSnackbar('Successfully changed settings.');
            }
        }
        xhttp.send(urlString);
    }, 100);
}

// create url string from config object
function generateUrlString() {
    let urlString = '';
    for (let [key, value] of Object.entries(config)) {
        urlString += `${key}=${value}&`;
    }
    urlString = urlString.substring(0, urlString.length - 1);

    return urlString;
}


function updateUIElements() {
    // FormData(document.getElementById('image-selection-form'))value = config.selectedImage;
    document.getElementById('fps-input').value = config.fps;

    document.getElementById('brightness-slider').value = Math.round(config.brightness / 2.55);
    document.getElementById('brightness-info').value = Math.round(config.brightness / 2.55);
}

function onValueChange(element, targetProperty) {
    switch(targetProperty) {
        case 'selectedImage': config[targetProperty] = parseInt(element.value); break;
        case 'fps': config[targetProperty] = element.value; break;
        case 'brightness': config[targetProperty] = Math.round(element.value * 2.55); break;
        default: break;

    }

    updateUIElements();
    sendDataUpdate();
}

let snackbarTimeout = null;
function showSnackbar(text) {
    let el = document.getElementById('snackbar');
    el.innerHTML = text;
    el.className = 'show';

    clearTimeout(snackbarTimeout);
    setTimeout(function() {
        el.className = el.className.replace('show', '');
    }, 3000)
}