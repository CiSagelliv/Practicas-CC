
int led = 3; //pin al que está conectado el led
int potenciometro = 0; // es el pin al que está conectado el potenciometro
int brillo;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  brillo = analogRead(potenciometro)/4; //el valor del potenciometro se divide entre 4 para darle un valor que no queme el led al mover el potenciometro, creo :v debería investigarlo xD
  analogWrite(led, brillo); //prende el ledsito c8
}
