#include "Tablero.h"
#include <iostream>

using namespace std;

int matriz[11][11];
int filas = 0;
int columnas = 0;
int i;
int j;

void Tablero::crear(){
  for (i = 0; i < 11; i++) {
    for(j = 0; j < 11; j++) {
    }
  }
}

void Tablero::imprimir(){
    for (i = 0; i < 11; i++) {
      for (j = 0; j < 11; j++) {
        cout << "[" << matriz[i][j] << "]";
      }
      cout << endl;
    }
  }

void Tablero::eliminar(){
  for (int i = 0; i < matriz[i]; i++) {
    delete[] matriz[i];
    matriz[i] = NULL;
  }

  delete[]matriz;

  cout << "Borrando..." << endl;
}
void Tablero::movimiento(){

}
}
