#include <Arduino.h>
#include <DataCapture.h>

using namespace DataCapture;
nodo *crearnodo(int,nodo*);
void insertarnodo(nodo*&,int, nodo*);
void mostrararbol(nodo *,int);
bool busqueda (nodo*, int);
void preorden (nodo*);
void inorden (nodo*);
void postorden(nodo*);
void eliminar (nodo *, int);
void eliminarnodo(nodo*);
nodo *minimo(nodo *); 


nodo*arbol=NULL;

void setup() {

  void menu ()(
  int dato, opcion, contador=0;

  do{
      Serial.println("\t MENU. ");
      Serial.println("1. Insertar un nuevo nodo");
      Serial.println("2. Mostrar el arbol completo");
      Serial.println("3. Buscar un elemento en el arbol");
      Serial.println("4. Recorrer el arbol en PreOrden");
      Serial.println("5. Recorrer el arbol en InOrden");
      Serial.println("6. Recorrer el arbol en PostOrden");
      Serial.println("7. Salir ");
       int number = captureInteger("Digite la pocion que desea");

  }
  switch (opcion)
  {
  case 1:  int numero= captureInteger("digite un numero");
           insertarnodo (arbol, dato, NULL); 
           Serial.println();
           system ("pause"); 
    break;

  case 2:  Serial.println ("Mostrando el arbol completo: \n\n");
           mostrararbol(arbol,contador);
           Serial.println();
           system ("pause");
    break;

  case 3: int elemento= captureInteger("Digite el elemtno a buscar: \n\n");
           if (busqueda(arbol,dato)== true){
             Serial.println("Elemento "<<dato<< "A sido encontrado en el: ");

           } 
           else {
              Serial.println("Elemento no encontrado. ");
           }
           Serial.println();
           system ("Pause");
    break;

  case 4: Serial.println ("Recorrido en PreOrden")
          preorden(arbol);
          serial.println();
          system ("pause");
    break 4;

  case 5: Serial.println ("Recorrido en InOrden")
          inorden(arbol);
          serial.println();
          system ("pause");
    break 5;

  case 6: Serial.println ("Recorrido en PostOrden")
          postorden(arbol);
          serial.println();
          system ("pause");
    break 6; 

  case 7: Serial.println ("Gracias por escogernos...")
          system ("pause");
    break 7;   

  
  }

  )


  nuevo_nodo-> dato =n;
  nuevo_nodo-> der =NULL;
  nuevo_nodo-> izq = NULL;
  nuevo_nodo->padre = padre;

  return nuevo_nodo;

}

void insertarNodo (Nodo *&arbol, int n, Nodo * padre)
{
  if(arbol == NULL ){
    nodo *nuevo_nodo = crearnodo (n,padre);
    arbol =nuevo_nodo;
  }
  else{
    int valorRaiz = arbol -> dato;
    if(n< valorRaiz){
      insertarnodo(arbol->izq, n, arbol);
    }
    else {
      insertarnodo(arbol->der,n,arbol);
    }
  }
}

void mostrararbol(nodo *arbol,int cont){
  if(arbol ==NULL){
    return;
  }
  else
  {
    
  }
}
void loop() {
}