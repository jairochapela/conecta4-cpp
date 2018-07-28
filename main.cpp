#include <iostream>
#include "jugador.h"
#include "tablero.h"
#include "colores.h"


using namespace std;

int main(int, char**) {
   

    Jugador a(ROJO);
    Jugador b(AZUL);
    Tablero x;
    int columna;

    do {

        cout << "Jugador A, introduzca ficha: " << endl;
        cin >> columna;

        a.jugarFicha(columna, x);

        cout << x << endl;

        cout << "Jugador B, introduzca ficha: " << endl;
        cin >> columna;

        b.jugarFicha(columna, x);

        cout << x << endl;


    } while(!x.ganador());




    cout << x << endl;

    cout << "Ganador: " << x.ganador() << endl;
}
