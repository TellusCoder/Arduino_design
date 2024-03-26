
// declaracion de variable 
const int ledPin = 2; // donde esta conectada  el led
const int anlogPin = 0; // donde esta conectada el potenciometro 
// el valor de potenciometro es 0
int val = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(anlogPin);
  analogWrite(ledPin, val/4);
  Serial.println( val);
  Serial.println();

}
 
