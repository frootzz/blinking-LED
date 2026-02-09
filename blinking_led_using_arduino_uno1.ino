void setup() {
  pinMode(13, OUTPUT);   // Set pin 13 as output
}

void loop() {
  digitalWrite(13, HIGH); // LED ON
  delay(100);            // Wait 1 second

  digitalWrite(13, LOW);  // LED OFF
  delay(100);            // Wait 1 second
}
