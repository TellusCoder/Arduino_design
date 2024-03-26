//
int rojo = 13; 
int amarillo = 12;
int verde = 11;


void setup() {
  // put your setup code here, to run once:
  pinMode(rojo,OUTPUT); // pin  13  de salida
  pinMode(amarillo,OUTPUT); //  pin de 12 de salida digital 
  pinMode(verde,OUTPUT); //   pin de 11 de salida digital

}

void loop() {
  //  semaforo Led de verde 
  digitalWrite(verde, HIGH);
  // Encender los led por 7 segundo
  delay (7000);
  // despues se apaga de 3 sgundo 
  digitalWrite(verde, LOW); // duracion del semaforo 
  delay (1000);
  // Semaforo amarillo
  digitalWrite(amarillo, HIGH);
  delay (2000);
  // despues se apaga de 3 sgundo 
  digitalWrite(amarillo, LOW); 
  delay (1000);
  // semaforo rojo 
  digitalWrite(rojo, HIGH);
  // Encender led por 3 segundo 
  delay (3000);
  // despues se apaga de 1 sgundo 
  digitalWrite(rojo, LOW);
  delay (1000); // duracion del semaforo 

}
