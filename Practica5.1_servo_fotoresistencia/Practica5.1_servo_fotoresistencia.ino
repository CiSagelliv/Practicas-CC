#include <Servo.h>
Servo elServo;
int sensibilidad_fotoresistencia = 400;
int valor_lectura = 0;

void setup() {
  Serial.begin(9600);
  elServo.attach(9); //pin al que está conectado el servo
}

void loop() {
  valor_lectura = analogRead(valor_lectura);
  Serial.println(valor_lectura);
  if (valor_lectura < sensibilidad_fotoresistencia) { //si el valor de lectura de la fotoresistencia es menor a la sensibilidad de la misma el servo gira al sentido contrario 
    //de las manecillas del reloj
    valor_lectura = map(valor_lectura, 0, 1023, 0, 179); //asigan a valor_lectura entre 0 y 1023, los grados a los que puede girar el servo
    elServo.write(valor_lectura); //empieza movimiento del motor
    delay(15);
  }
  else //si el valor de lectura de la fotoresistencia es mayor al de la sensibilidad
  {
    Serial.println(valor_lectura);
    valor_lectura = map(valor_lectura, 0, 1023, 179, 0); //de igual manera se asigna a valor_lectura entre ' y 1023, los grados a los que va a girar el servo pero en sentido correcto
    //de las manecillas del reloj
    elServo.write(valor_lectura); //empieza movimiento del motor 
    delay(15);
  }
}
