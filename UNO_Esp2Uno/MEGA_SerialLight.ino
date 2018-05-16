/*---------- Informations on the project ----------*/
// This sketch is for testing the serial communication between the esp32 and an arduino mega.
// On another sketch (ESP32_Udp2Serial) the esp is receiving data via a wifi UDP access point and sending it over Serial to the arduino (this following sketch)
// This will be a part of the School_InformativeScreen project GPL licence
// https://github.com/Geekoid85/School_InformativeScreen

/*---------- Informations about wiring ----------*/
// Just connect the tx pin of the esp32 to the rx pin of the arduino mega (resistor is not needed in this way)
// And the ground, that's it !


int led(13); // This is the pin of the onBoard led of the arduino mega
void setup () {
  pinMode(led,OUTPUT); // led's pin is an OUTPUT
  digitalWrite(led,LOW); // make sure it's turn off
  Serial.begin(9600); // start the Serial communication at 9600 baud (it will be the same as the baudrate of the esp32)
  Serial.println(); // optional spacer
  Serial.println("Communication established !"); // when the setup is finished notify the user by this message
}
void loop() {
String message = Serial.readString(); // affect a new string object called "message" to the Serial.read
if (message == "on") { // if the received message is "on"
  digitalWrite(led,HIGH); // first turn on the led
  Serial.println("led: ON"); // and notify the user
}
else if (message == "off") { // if the received message is "off"
  digitalWrite(led,LOW); // first turn off the led
  Serial.println("led: OFF"); // and notify the user
}
message = "";
}
