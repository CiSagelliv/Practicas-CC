const int sensor_temperatura = 0;
int pin_led = 13;
long mili_volts;
long temperatura;

void setup() {
  Serial.begin(9600);
  pinMode(pin_led, OUTPUT);

}

void loop() {
  //Calculamos temperatura
  mili_volts = (analogRead(sensor_temperatura)*5000L)/1023;
  temperatura = mili_volts/10;
  if (temperatura > 20 && temperatura < 26){
      digitalWrite(pin_led, HIGH);
      delay(500);
      digitalWrite(pin_led, LOW);
      delay(500);
    }
  if (temperatura == 25){
      digitalWrite(pin_led, HIGH);
    }
}
