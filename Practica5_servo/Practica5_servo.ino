#include <Servo.h> //carga la librería del servo
Servo elServo; //se crea el objeto servo
int pin_potenciometro = 0;
int variable_lectura;
void setup() {
  // put your setup code here, to run once:
  elServo.attach(9); //servo conectado al pin número 9

}

void loop() {
  // put your main code here, to run repeatedly:
  variable_lectura = analogRead(pin_potenciometro);
  variable_lectura = map(variable_lectura,0,1023,0,179); //escala el potenciometro de 0 a 179 grados, entonces lo que hace es asignar a la variable de entre los grados disponibles cierto rango de grados
  elServo.write(variable_lectura); //aquí se coloca la posición del servo, que es hacia donde va a girar
  delay(15); //un delay pa que no se mueva mucho xD
}
