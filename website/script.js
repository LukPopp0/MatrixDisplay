"use strict";

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
    xhttp.open("GET", document.URL + "config", true);
    xhttp.onreadystatechange = function() {
        if (this.readyState == 4 && this.status == 200) {
            response = JSON.parse(xhttp.responseText);

            try {
                config.selectedImage = parseInt(response.selectedImage);
                config.fps = parseInt(response.fps);
                config.brightness = parseInt(response.brightness);
            } catch {}

            updateUIElements();
        }
    }
}

function sendDataUpdate() {
    // clear existing timeout and set new one to send only every 200 ms
    clearTimeout(dataUpdateTimeout);
    dataUpdateTimeout = setTimeout(() => {
        // generate url string from the config object
        let urlString = generateUrlString();
        // TODO: figure out why it is not sent
        let xhttp = new XMLHttpRequest();
        xhttp.open("POST", d.URL + "update", true);
        xhttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
        xhttp.onreadystatechange = function () {
            if (this.readyState == 4 && this.status == 200) {
                // TODO: maybe make this a toast?
                console.log("Successfully sent config update.");
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
    console.log(document.getElementById('image-selection-form'));
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