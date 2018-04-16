int myDelay(10);
void ledBlinking() {
  for (int i = 0; i <= packetSize; i++) { // do the following code the same number of times as the size the udp packet (in bits)
    digitalWrite(led, HIGH); // turn on the led
    delay(myDelay); // wait
    digitalWrite(led, LOW); // turn off the led
    delay(myDelay + 10); // the LOW(off) time is much higher than the HIGH(on) for optimizing readability
  }
}

