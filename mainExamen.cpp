#include <iostream>
#include "Tablero.h"

using namespace std;

int posicionX = 0;
int posicionY = 0;
int turno = 0;

int main(){
  Tablero* instancia = new Tablero();
  instancia->imprimir();
  if(turno == 0){
    cout << "Jugador 1: Ingrese fila en la que desea moverse: ";
    cin >> posicionX;
    cout << "Jugador 2: Ingrese columna en la que desea moverse: ";
    cin >> posicionY;
  }

  return 0;
}
