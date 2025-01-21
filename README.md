# BadDestination
GeoSpoofer

<img src="img/esp8266.png" alt="esp8266">

## ESP8266

The ESP8266 is a low-cost Wi-Fi microchip with full TCP/IP stack and microcontroller capability produced by manufacturer Espressif System in Shanghai, China.

The chip first came to the attention of western makers in August 2014 with the ESP-01 module, made by a third-party manufacturer Ai-Thinker. This small module allows microcontrollers to connect to a Wi-Fi network and make simple TCP/IP connections using Hayes-style commands. However, at first there was almost no English-language documentation on the chip and the commands it accepted. The very low price and the fact that there were very few external components on the module, which suggested that it could eventually be very inexpensive in volume, attracted many hackers to explore the module, chip, and the software on it, as well as to translate the Chinese documentation.

Using this device you can trick your phone to appearing almost anywhere in the connected world. Locations can be collected on-site or remotely using the Wigle.net API.
---
## Prepare:
- Setup an Wigle account: https://wigle.net
- add Wiggle creds. in sketch.sh 
- --wigle_api_name ... 
- --wigle_api_key ...

---
## Example: accra, lat: 5.5631, long: -0.1918
- run sudo bash ./sketch.sh
- Enter project name: accra
- Enter Lat: 5.5631
- Enter Long: -0.1918
---
creates files in: 
- accra.json
- arduino/accra/ ...

---
## Setup Arduino IDE

- Download Arduino IDE
- Install boards in File > Preferences: Additional boards manager URLs
- board URLs `http://arduino.esp8266.com/stable/package_esp8266com_index.json,https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json`
- Select board:
	- NodeMCU ESP32 is "ESP32 Dev Module"
- Set upload speed in Tools > Upload Speed to maximum 460800

---
## Setup Arduino IDE
https://github.com/Delivers/esp8266-geospoof
https://github.com/Delivers/skylift
