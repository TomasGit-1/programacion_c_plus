#include "NodoArbol.h"

class ArbolBusqueda{
    protected:
        Nodo* raiz;
    public:
        ArbolBusqueda(){
            raiz = NULL;
        }
        ArbolBusqueda(Nodo *r){
            raiz = r;
        }
        bool arbolVacio(){
            return raiz == NULL;
        }
        void Praiz(Nodo *r){raiz = r;}
        Nodo * Oraiz(){ return raiz;}
}