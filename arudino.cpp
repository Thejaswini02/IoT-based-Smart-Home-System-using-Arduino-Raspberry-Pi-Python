int ledPin = 7;    // Pin for LED
int relayPin = 8;  // Pin for Relay

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(relayPin, OUTPUT);
  Serial.begin(9600);  // Start serial communication at 9600 bps
}

void loop() {
  if (Serial.available() > 0) {
    char command = Serial.read();
    if (command == 'L') {
      digitalWrite(ledPin, HIGH);  // Turn on LED
    } else if (command == 'l') {
      digitalWrite(ledPin, LOW);   // Turn off LED
    } else if (command == 'F') {
      digitalWrite(relayPin, HIGH);  // Turn on Fan
    } else if (command == 'f') {
      digitalWrite(relayPin, LOW);   // Turn off Fan
    }
  }
}
