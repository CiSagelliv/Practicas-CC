int foto_resistencia = 0;
int valor_foto_resistencia = 0;
int sensibilidad = 400; //rango de luz en el ambiente

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  valor_foto_resistencia = analogRead(foto_resistencia);
  Serial.print(valor_foto_resistencia);
  delay(50);
  if (valor_foto_resistencia < sensibilidad){
      digitalWrite(3, HIGH);
  } else {
      digitalWrite(3, LOW);
  }
}
