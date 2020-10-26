# IoT-enabled-plants-waterer
It is an IoT enabled Plants waterer. 
The materials used in the above project are:
a) NodeMCU 1.0 ESP8266 WiFi Dev Board.
b) Generic Relay Module
c) Soil Moisture Sensor
d) Motor used to raise water

Working of the project:
a) First, the node mcu will connect itself to a local WiFi network. Please change the name to your wifi ssid from myssid. Do the same with the password too.
b) Create a webhook on https://maker.ifttt.com, go to the documentation and copy the api key and paste it in the ifttt_api_key variable.
c) The basic working principle of this project is that if the moisture in the soil sensor is high, the relay module will turn on and supply high voltage of current to the connected motor.
While the motor is on, it will give you a notification or a call on your device that the motor is on now.


For any further queries kindly contact me on akshayvr2@gmail.com
