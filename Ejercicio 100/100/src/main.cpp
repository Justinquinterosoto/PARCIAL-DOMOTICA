#include <Arduino.h>
#include <DataCapture.h>

using namespace DataCapture;

struct nodo {
  int dato;
  nodo* siguiente;
};

void insertarCola(nodo*&, nodo*&, int);
bool cola_vacia(nodo*);

nodo* frente = NULL;
nodo* fin = NULL;

void setup() {
  Serial.begin(9600);
  Serial.println();

  int dato;
  int number;
  
  number = captureInteger("Ingrese un numero");
  insertarCola(frente, fin, number);

  Serial.println("Elemento insertado a la cola correctamente");
}



void insertarCola(nodo*& frente, nodo*& fin, int n) {
  nodo* nuevo_nodo = new nodo();

  nuevo_nodo->dato = n;
  nuevo_nodo->siguiente = NULL;

  if (cola_vacia(frente)) {
    frente = nuevo_nodo;
  } else {
    fin->siguiente = nuevo_nodo;
  }
  fin = nuevo_nodo;

  Serial.println("Elemento insertado a la cola correctamente");
}

bool cola_vacia(nodo* frente) {
  return (frente == NULL) ? true : false;
}
void loop() {
}