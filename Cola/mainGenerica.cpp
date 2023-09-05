#include "colaGenerica.h"
#include <iostream>

int main(){

    ColaGenerica<std::string> colaG1;

    colaG1.insertar("Hola Mundo");
    colaG1.insertar("Hola Mund");
    colaG1.insertar("Hola Mun");
    colaG1.insertar("Hola Mu");
    colaG1.insertar("Hola M");
    colaG1.insertar("Hola ");
    colaG1.insertar("Hol");
    colaG1.insertar("Ho");
    colaG1.insertar("H");
    colaG1.mostrarCola();
    colaG1.insertar("HO");
    colaG1.mostrarCola();
    colaG1.quitar();
    return 0;
}