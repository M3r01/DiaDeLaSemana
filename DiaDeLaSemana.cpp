#include <iostream>
#include <string.h>

using namespace std;

int main () {

string diaDeLaSemana;
int numeroDelDia;

cout<<"Ingrese el dia de la semana:\n";
cin>>diaDeLaSemana;

if (diaDeLaSemana == "lunes" || diaDeLaSemana == "Lunes")
    numeroDelDia=1;
    else if (diaDeLaSemana == "martes" || diaDeLaSemana == "Martes")
    numeroDelDia=2;
    else if (diaDeLaSemana == "miercoles" || diaDeLaSemana == "Miercoles")
    numeroDelDia=3;
    else if (diaDeLaSemana == "jueves" || diaDeLaSemana == "Jueves")
    numeroDelDia=4;
    else if (diaDeLaSemana == "viernes" || diaDeLaSemana == "Viernes")
    numeroDelDia=5;
    else
    cout<<"Ingrese un dia del lunes al viernes";

    switch (numeroDelDia) {

case 1:
    cout<<"Hoy no cursa programacion\n";
    break;

case 2:
    cout<<"Hoy no cursa programacion\n";
    break;

case 3:
    cout<<"Hoy si cursa programacion\n";
    break;

case 4:
    cout<<"Hoy no cursa programacion\n";
    break;

case 5:
    cout<<"Hoy si cursa programacion\n";
    break;

    }

return 0;
}
