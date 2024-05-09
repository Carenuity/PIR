# PIR Motion Detector

This project utilizes a D1-Mini microcontroller and a 0.66" OLED display to create a motion detector using a PIR (Passive Infrared) sensor. The D1-Mini microcontroller is programmed to read the output of the PIR sensor, and when motion is detected, the microcontroller sends a signal to the OLED display to display a notification.

## Components Used
- D1-Mini microcontroller: This is a compact and powerful microcontroller based on the ESP8266 chipset, which is widely used for IoT projects.
- 0.66" OLED Display: This is a small monochrome display with a resolution of 64x48 pixels, which is perfect for displaying simple text notifications.
- PIR Sensor: This is a motion sensor that detects infrared radiation emitted by moving objects. It is commonly used in security systems to detect motion in the surrounding environment.

## Wiring Instructions
https://chipglobe-dev.web.app/PIR
![image](https://user-images.githubusercontent.com/74060530/232559750-742a92e2-b9cd-48df-a31a-fddb48f48c62.png)

- Connect the VCC pin of the PIR sensor to the 3.3V pin on the D1-Mini microcontroller.
- Connect the GND pin of the PIR sensor to the GND pin on the D1-Mini microcontroller.
- Connect the OUT pin of the PIR sensor to any digital pin D3 on the D1-Mini microcontroller.
- Connect the SDA pin of the OLED display to the D2 pin on the D1-Mini microcontroller.
- Connect the SCL pin of the OLED display to the D1 pin on the D1-Mini microcontroller.
- Finally, connect the VCC and GND pins of the OLED display to the 3.3V and GND pins on the D1-Mini microcontroller, respectively.

## Software Dependencies
This project requires the following libraries to be installed in your Arduino IDE:

- Adafruit SSD1306: This library provides functions to control the OLED display.
- Adafruit GFX: This library provides graphics functions for the OLED display.
- ESP8266WiFi: This library provides functions to configure and connect to Wi-Fi networks using the ESP8266 chipset.
- Wire: This library provides I2C communication functions for the OLED display.

## Usage
Upload the code (motion_detector.ino) to your D1-Mini microcontroller using the Arduino IDE.
Open the Serial Monitor in the Arduino IDE to view the output of the PIR sensor. It will display "Motion Detected" when motion is detected and "No Motion" when there is no motion.

Once motion is detected, the OLED display will show a notification "Motion Detected" for a few seconds.
You can customize the duration for which the notification is displayed on the OLED display by modifying the DISPLAY_DURATION variable in the code.

## License
This project is open-source and available under the MIT License. Feel free to modify and use it for your own purposes.

## Acknowledgements
This project was inspired by various online resources and tutorials, and it was made possible with the help of the following libraries:

- Adafruit SSD1306 Library
- Adafruit GFX Library
- ESP8266WiFi Library
- Wire Library
Special thanks to the contributors of these libraries for their hard work and dedication to the open-source community.
