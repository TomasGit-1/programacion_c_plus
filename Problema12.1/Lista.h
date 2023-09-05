
#include "colaGenerica.h"
#include "Nodo.h"
typedef int Dato;

class Lista{
    protected:
        Nodo* primero;
        public:
            Lista(){
                primero = NULL;
            }
            void crearLista();
            void insertarCabezaLista(Dato entrada);
            void visualizar();      
};

void Lista::crearLista(){
    int x;
    primero = 0;
    std::cout<< "Termina con -1" << std::endl;
    do{
        std::cin >> x;
        if(x != -1)
            primero = new Nodo(x, primero);                  
    }while(x != -1);            
}

void Lista::insertarCabezaLista(Dato entrada){
    Nodo* nuevo;
    nuevo = new Nodo(entrada);
    nuevo-> ponerEnlace(primero);
    primero = nuevo;
}

void Lista::visualizar(){
    Nodo* n;
    int k =0;
    n = primero;
    while(n != NULL){
        char c;
        k++; 
        c = (k % 15 != 0 ?  ' ' : '\n');
        std::cout << n -> datoNodo() << c;
        n = n -> enlaceNodo();
    }
}