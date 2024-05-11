#include <Arduino.h>

const int led1 = 18;

void setup(){
  pinMode(led1,OUTPUT);
}

void loop (){
  digitalWrite(led1,HIGH);
  delay (1000);
}