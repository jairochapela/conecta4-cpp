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

    cout << x << endl;

    do {

        cout << "Jugador A, introduzca ficha: " << endl;
        cin >> columna;

        a.jugarFicha(columna, x);

        cout << x << endl;
        
        if (x.ganador()) break;

        cout << "Jugador B, introduzca ficha: " << endl;
        cin >> columna;

        b.jugarFicha(columna, x);

        cout << x << endl;


    } while(!x.ganador());





    cout << "Ganador: " << x.ganador() << endl;
}
