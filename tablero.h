#ifndef __TABLERO__
#define __TABLERO__
#include <iostream>


class Tablero {

    private:
    int casillas[6][7];
    int turno;

    public:
    Tablero();
    void ponerFicha(int columna, int color);
    int comprobarDireccion(int avanceH, int avanceV, int n);
    int ganador();

    friend std::ostream& operator<< (std::ostream& o, Tablero& t);
} ;



#endif
