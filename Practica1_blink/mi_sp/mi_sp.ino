int ledsito = 13;
void setup() {
  pinMode(ledsito, OUTPUT);
}

void loop() {
  digitalWrite(ledsito, HIGH);
  delay(500);
  digitalWrite(ledsito, LOW);
  delay(500);
}
