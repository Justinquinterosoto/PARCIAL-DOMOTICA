




#include <Arduino.h>






void setup() 
{

  Serial.begin (9600);
  Serial.println();

  int numeros []= {1,2,3,4,5};
  int inf, sup, mitad, dato;
  char band = 'F';

  dato = 2; 

  inf= 0;
  sup= 5; 

  while (inf <= sup)
  {
    mitad = (inf+sup)/2;

    if(numeros[mitad]== dato)
    {
      band = 'V';
      break;
    }
    if(numeros [mitad] > dato)
    {
      sup = mitad;
      mitad = (inf+sup)/2;
    }
    if (numeros[mitad]< dato)
    {
      inf = mitad;
      mitad = (inf + sup)/2;
    }
  }


  if (band =='V')
  {
     Serial.printf ("El numero se ha encontrado en la posicion:"  );
     Serial.print (mitad);
  }
  else
  { 
    Serial.println("El numero no ha sido encontrado");
  }
}

void loop() {
}