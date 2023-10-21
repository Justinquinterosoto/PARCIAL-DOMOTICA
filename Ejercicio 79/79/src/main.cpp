


#include <Arduino.h>

void setup(){

  int factorial (int);
  Serial.printf ("Factorial: ");
  factorial =5;
  int factorial (int n );
    if (n==0 )
    {
      n=1;
    }
    else 
    {
      n=n*factorial (n-1);
    }
    return n; 
  
}
void loop() {
}
