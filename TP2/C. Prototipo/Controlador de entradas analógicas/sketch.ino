#define  sensorTemperatura A0
int valor;
float temperatura;

void setup() {
  pinMode(sensorTemperatura, INPUT);
  Serial.begin(9600);
}

void loop() {
  valor = analogRead(sensorTemperatura);
  temperatura = (-0.0282*(valor) + 85.324);
  Serial.print("Valor: ");
  Serial.print(valor);
  Serial.print("\nTemperatura: ");
  Serial.print(temperatura);
  Serial.println("°C");

  delay(1000);
}
