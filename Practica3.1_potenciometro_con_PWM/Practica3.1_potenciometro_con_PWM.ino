int pin_led = 3;
int pin_potenciometro = 0;
int brillo_led;

void setup() {
  pinMode(pin_led, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  brillo_led = analogRead(pin_potenciometro)/4;
  analogWrite(pin_led, brillo_led);
  Serial.print("Analog in: ")
  pin_potenciometro = analogRead(A0);
  Serial.print(pin_potenciometro);
  Serial.println("Brillo: ")
  Serial.print(brillo_led);

}
