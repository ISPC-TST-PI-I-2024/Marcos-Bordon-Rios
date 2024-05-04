const int led1 = 1;
const int led2 = 2; 
const int led3 = 3;
const int led4 = 4;
const unsigned long intervalo = 500;

unsigned long actualizacion = 0;

bool estado1 = false;
bool estado2 = false;
bool estado3 = false;
bool estado4 = false;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  unsigned long tiempoActual = millis();

  if (tiempoActual - actualizacion >= intervalo) {
    actualizacion = tiempoActual;

    estado1 = !estado1;
    estado2 = !estado2;
    estado3 = !estado3;
    estado4 = !estado4;
    
    digitalWrite(led1, estado1 ? HIGH : LOW);
    digitalWrite(led2, estado2 ? HIGH : LOW);
    digitalWrite(led3, estado3 ? HIGH : LOW);
    digitalWrite(led4, estado4 ? HIGH : LOW);
  }
}