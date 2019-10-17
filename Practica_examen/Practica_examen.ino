#include <Servo.h>
Servo servo;
#define sensor_temperatura A0
long mili_volts;
long temperatura;
int led = 12;
int grados = 0;

void setup() {
  Serial.begin(9600);
  servo.attach(9);
  pinMode(led, OUTPUT);

}

void loop() {
  mili_volts = (analogRead(sensor_temperatura)*5000L)/1023;
  temperatura = mili_volts/10;
  Serial.print("Temperatura: ");
  Serial.println(temperatura);
  if (temperatura > 20 && temperatura < 26){
      grados = map(temperatura,21,25,0,120);
      Serial.println(grados);
      servo.write(grados + 29);
      delay(3000);
    }
  if (temperatura >= 25){
      digitalWrite(led, HIGH);
      delay(100);
      digitalWrite(led, LOW);
      delay(100);
    }
}
