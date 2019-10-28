const int sensor_temperatura = 0; //entrada del sensor
long mili_volts;
long temperatura;


void setup() {
 Seria.begin(9600);

}

void loop() {
  mili_volts = (analogRead(sensor_temperatura)*5000L)/1023; //se calculan los mili volts de la entrada del sensor
  temperatura = mili_volts/10; //se calcula la temperatura
  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println("°");
  delay(500);

}
