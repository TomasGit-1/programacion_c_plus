#include <iostream>
#include "NodoGenerico.h"

int main(){
    NodoGenerico<std::string>* nodoG1 = new NodoGenerico<std::string>("Hola");
    NodoGenerico<std::string>* nodoG2 = new NodoGenerico<std::string>("Hol");
    NodoGenerico<std::string>* nodoG3 = new NodoGenerico<std::string>("Ho");
    NodoGenerico<std::string>* nodoG4 = new NodoGenerico<std::string>("H");
  
    nodoG1->ponerEnlace(nodoG2);
    nodoG2->ponerEnlace(nodoG3);
    nodoG3->ponerEnlace(nodoG4);
    //Direccion de memoria a nodoActual
    NodoGenerico<std::string>* nodoActual = nodoG1;
    
    while (nodoActual){
        std::cout << nodoActual->datoNodo() << std::endl;
        nodoActual = nodoActual->enlaceNodo();
    }
    std::cout << "nullptr" << std::endl;
    
    return 0;
}