# IoT-based-Smart-Home-System-using-Arduino-Raspberry-Pi-Python
using Arduino, Raspberry Pi, Python 

Hardware Components:

*Arduino Uno
*Raspberry Pi
*LED (representing the light)
*Relay module (to control the fan)
*Resistors, Breadboard, and Jumper Wires


Software Components:

*Arduino IDE
*Python
*Flask (a lightweight WSGI web application framework for Python)
*PySerial (Python library for serial communication)


How to Run

1. Set up the hardware:

*Connect the LED to pin 7 on the Arduino.
*Connect the relay module to pin 8 on the Arduino (this will control the fan).
*Ensure proper connections and power supply to the Arduino and Raspberry Pi.

2. Upload the Arduino code:

*Open the Arduino IDE, paste the Arduino code, and upload it to the Arduino Uno.

3.Run the Flask app on Raspberry Pi:

*Save the Python code in a file named app.py.
*Create a folder named templates in the same directory as app.py and save index.html inside the templates folder.
*Run the Flask app by executing python app.py.

4.Access the web interface:

*Open a web browser on a device connected to the same network as the Raspberry Pi.
*Enter the Raspberry Pi's IP address followed by :5000 (e.g., http://192.168.1.100:5000).

Now you should be able to control the light and the fan using the web interface provided by the Flask application running on your Raspberry Pi.
