#include <iostream>
#include "Nodo.h"

int main(){
    Nodo nodo1(10);
    Nodo nodo2(3);
    Nodo nodo3(14);
    Nodo nodo4(5);

    nodo1.ponerEnlace(&nodo2);
    nodo2.ponerEnlace(&nodo3);
    nodo3.ponerEnlace(&nodo4);

    Nodo* nodoActual = &nodo1;

    while(nodoActual){
        std::cout << nodoActual->datoNodo() << " -> ";
        nodoActual = nodoActual->enlaceNodo();
    }
    std::cout << "nullptr" << std::endl;
    return 0;
}