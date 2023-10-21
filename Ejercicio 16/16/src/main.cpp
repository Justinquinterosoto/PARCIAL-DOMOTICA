// Parcial, Ejercicio 16.
/*Escriba un programa que solicite una edad (un entero ) e indique en la
salida si la edad introducida está en el rango [18-25] */


#include <Arduino.h>

#include <DataCapture.h>

using namespace DataCapture;

void setup() {

  Serial.begin (9600);
  Serial.println();
  
  int edad= captureInteger("Ingrese su edad");
  

  if ((edad>=18)&&(edad<=25)){
      Serial.print("Su edad esta en el rango de [18 - 25]");
  }
  else{
    Serial.println("Su edad no pertenece al rango requerido");
  } 

}
  
  
  
  
  
  
  
  
  




  
void loop() {
}

