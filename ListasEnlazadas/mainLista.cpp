#include <iostream>
typedef int Dato;
#include "Nodo.h"
#include "Lista.h"

int main(){
    Dato d;
    Lista lista; //Lista Vacia
    std::cout<<"Elementos de la lista, Termina con -1 "<<std::endl;

    do{
        if(d != -1){
            std::cin >> d;
            lista.insertarCabezaLista(d);
        }
    }while(d != -1);
    //Recorre la lista para escribir susu elementos
    std::cout<<"Elementos de la lista generados al azar" << std::endl;
    lista.visualizar();

    return 0;
}