#include "Tablero.h"
#include <iostream>

int matriz[11][11];

void Tablero::crear(){
  for (int i = 0; i < 11; i++) {
  }
  for (int j = 0; j < 11; j++) {
  }
  matriz[i][j] = 0;
}

void Tablero::impirmir(){
    for (int i = 0; i < 11; i++) {
      for (int j = 0; j < 11; j++) {
        cout << "[" << matriz[i][j] << "]";
      }
      cout << endl;
    }
  }
