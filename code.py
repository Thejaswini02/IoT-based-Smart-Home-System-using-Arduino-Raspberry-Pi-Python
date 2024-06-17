from flask import Flask, render_template, request
import serial

app = Flask(__name__)

# Configure the serial port to which Arduino is connected
ser = serial.Serial('/dev/ttyACM0', 9600)

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/control', methods=['POST'])
def control():
    device = request.form['device']
    action = request.form['action']
    
    if device == 'light' and action == 'on':
        ser.write(b'L')
    elif device == 'light' and action == 'off':
        ser.write(b'l')
    elif device == 'fan' and action == 'on':
        ser.write(b'F')
    elif device == 'fan' and action == 'off':
        ser.write(b'f')
    
    return 'OK'

if __name__ == '__main__':
    app.run(host='0.0.0.0', port=5000)
