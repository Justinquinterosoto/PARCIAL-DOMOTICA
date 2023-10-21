//Hacer una matriz de tipo entera 2*2. Llenarla de numeros 
// y luego copiar todo su contenido hacia otra matriz.

#include <Arduino.h>
#include <DataCapture.h>

using namespace DataCapture;



void setup()
{
    Serial.begin (9600);
    Serial.println ();
    
    
    int numeros [2][2]= {{1,2}, {3,4}};
    int matriz [2][2];

    for( int i=0; i<2; i++)
    {
      for (int j=0; j<2; j++ )
      {
          matriz [i][j] = numeros [i][j];
      }

    }

  for (int i=0;i<2;i++)
  {
     for (int j=0; j<2; j++ )
     {
      Serial.print (matriz[i][j]);
     }
     Serial.println();
  }



}

void loop() {
}
