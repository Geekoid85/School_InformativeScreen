/* This is a simple exemple code to help you learn and understand how to read the Serial trame send by the esp
  (and by the way the android application) and "convert" it to a String object for easy decoding and interpretation */

String myMessage = "";
void setup() {
  Serial.begin(115200);
  Serial.println();
}

void loop() {
  if (Serial.available()) { // If a message is receive on the serial
    myMessage = Serial.readString(); // Read it and affect it to myMessage String object
    Serial.println(myMessage); // When this is finished display it on the serial monitor
    myMessage = ""; // Reset my string object
  }
}
