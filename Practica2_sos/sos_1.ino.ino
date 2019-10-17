int ledsito =13;

 void setup() {
    pinMode(ledsito,OUTPUT);
}

void loop() {
  
    parpadeo(200); parpadeo(200); parpadeo(200); // S
    delay(300); 
    parpadeo(500); parpadeo(500); parpadeo(500); // O
    parpadeo(200); parpadeo(200); parpadeo(200); // S
    delay(1000);
    
}

void parpadeo(int duracion_sg)
{
  digitalWrite(ledsito,HIGH);
  delay(duracion_sg);
  digitalWrite(ledsito,LOW);
  delay(duracion_sg);
}
