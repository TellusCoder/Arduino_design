// un potenciometro 3 led 

// variables 
int  valorPotenciometro;
float voltaje;
// declaracionde la variable constante
const int rojo = 13;  // led
const int amarillo = 12; // led
const int verde = 11; // led 
const int analogPin= 0; // variable A0
 

void setup() {
  // 
  Serial.begin(9600);
 
  pinMode(rojo,OUTPUT); // pin  13  de salida
  pinMode(amarillo,OUTPUT); //  pin de 12 de salida digital 
  pinMode(verde,OUTPUT); //   pin de 11 de salida digital

}

void loop() {
  //
  valorPotenciometro = analogRead (analogPin); // leer el pin del brillo
  // para el Voltaje 
  voltaje = valorPotenciometro * (5.0 / 1023.0);
 
  // creamos una estructura de control para led  rojo
  if ( valorPotenciometro == 716 ) // potenciometro 3.5 voltio  led rojo
   { 
    	digitalWrite(verde,LOW);
    	digitalWrite(amarillo,LOW);
    	digitalWrite(rojo,HIGH);
  }
    // creamos una estructura de control para led amarillo
  if ( valorPotenciometro == 921 ){ // potenciometro  4.5 voltio  led rojo
    	digitalWrite(verde,LOW);
    	digitalWrite(amarillo,HIGH);
    	digitalWrite(rojo,LOW);

  }
   // creamos un estructura de control para led verde
  if ( valorPotenciometro == 982 ){ // de  verde 4.8 voltio
    digitalWrite(verde,HIGH);
    digitalWrite(amarillo,LOW);
    digitalWrite(rojo,LOW);
  }
  // 
  else { 
    digitalWrite(verde,LOW);
    digitalWrite(amarillo,LOW);
    digitalWrite(rojo,LOW);
    
  }
  // datos Salida de  potecimemtro y la salida de voltaje
  Serial.print("Voltaje: ");
  Serial.println(voltaje);
  Serial.print(", El valor del potenciometro es: ");
  Serial.println( valorPotenciometro); // imprimir el voltaje  de salida 
  Serial.println();

}
