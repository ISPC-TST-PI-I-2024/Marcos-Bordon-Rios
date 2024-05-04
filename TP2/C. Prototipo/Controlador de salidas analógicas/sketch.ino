#define ReadingPort A0
int led = A5;
int intensidad;

void setup() { 
 pinMode(led, OUTPUT);
 Serial.begin(9600);
 
}
void loop() {
intensidad = analogRead(ReadingPort)/4;
analogWrite(led, intensidad);
Serial.println(intensidad);
delay(500);
}