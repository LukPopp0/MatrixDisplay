'use strict';

let config = {
    selectedImage: 0,
    fps: 12,
    brightness: 127,
};

let dataUpdateTimeout = null;

function init() {
    loadConfiguration();
    updateUIElements();
}

function loadConfiguration() {
    const baseURL = getBaseURL();

    let xhttp = new XMLHttpRequest();
    xhttp.open('GET', baseURL + 'config', true);
    showSnackbar(`Requesting configuration`);
    xhttp.onreadystatechange = function() {
        if (this.readyState === 4 && this.status === 200) {
            const response = JSON.parse(xhttp.responseText);

            try {
                config.selectedImage = parseInt(response.selectedImage);
                config.fps = parseInt(response.fps);
                config.brightness = parseInt(response.brightness);
                showSnackbar('Successfully read configuration.')
            } catch {
                showSnackbar('Failed to read data.')
            }

            updateUIElements();
        }
    }
    xhttp.send();
}

function sendDataUpdate() {
    // clear existing timeout and set new one to send only every 200 ms
    clearTimeout(dataUpdateTimeout);
    dataUpdateTimeout = setTimeout(() => {
        showSnackbar('Sending data update.');

        // generate url string from the config object
        let urlString = generateUrlString();

        const baseURL = getBaseURL();

        let xhttp = new XMLHttpRequest();
        xhttp.open('POST', baseURL + 'update', true);
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
    let tmp = document.getElementsByClassName('selected-image');
    if(tmp.length > 0) {
        tmp[0].classList.remove('selected-image');
    }
    let imageSelectionContainer = document.getElementById('image-selection-container');
    console.log(config.selectedImage, imageSelectionContainer)
    imageSelectionContainer.children[config.selectedImage].classList.add('selected-image');

    document.getElementById('fps-input').value = config.fps;

    document.getElementById('brightness-slider').value = Math.round(config.brightness / 2.55);
    document.getElementById('brightness-info').value = Math.round(config.brightness / 2.55);
}

function onValueChange(element, targetProperty) {
    switch(targetProperty) {
        case 'selectedImage': config[targetProperty] = parseInt(element.getAttribute('value')); break;
        case 'fps': config[targetProperty] = element.value; break;
        case 'brightness': config[targetProperty] = Math.round(element.value * 2.55); break;
        default: break;
    }

    updateUIElements();
}

let snackbarTimeout = null;
function showSnackbar(text) {
    let el = document.getElementById('snackbar');
    el.innerHTML = text;
    el.className = 'show';

    clearTimeout(snackbarTimeout);
    setTimeout(function() {
        el.className = el.className.replace('show', '');
    }, 5000)
}

function getBaseURL() {
    return document.URL
        .replace('index.html', '')
        .replace('generate_204', '')
        .replace('gen_204', '');
}