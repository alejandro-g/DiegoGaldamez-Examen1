#include "Tablero.h"
#include <iostream>

using namespace std;

int matriz[11][11];
int filas;
int columnas;
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
  for (i = 0; i < 11; i++) {
    delete[] matriz[i];
    matriz[i] =  NULL;
  }

  delete[]matriz;

  cout << "Borrando..." << endl;
}
void Tablero::ponerFichas(){
  for (int i = 0; i < 11; i++) {
    for (int j = 0; j < 11; i++) {
      matriz[0][0] == '+';
      matriz[0][10] == '#';
      matriz[10][0] == '#';
      matriz[10][10] == '+';
    }
  }
}
