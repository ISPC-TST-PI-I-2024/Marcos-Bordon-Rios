int pulsador = 2;
int led = 3;
int estado;

void setup() {
pinMode(pulsador, INPUT);
pinMode(led,OUTPUT);
}

void loop() {
while (digitalRead(pulsador) == LOW){
}
estado = digitalRead(led);
digitalWrite(led,!estado);
while (digitalRead(pulsador) == HIGH){
}
}