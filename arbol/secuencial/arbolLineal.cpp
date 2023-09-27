#include <string>
typedef std::string TipoElemento;
#include "NodoArbol.h"
class Arbolbinario{
    protected:
        Nodo *raiz;
    public:
        Arbolbinario(){
            raiz = NULL;
        }
        
        Arbolbinario(Nodo *r){
            raiz = r;
        }

        void Praiz(Nodo *r){
            raiz = r;
        }

        Nodo* Oraiz(){
            return raiz;
        }
        
        Nodo raizArbol(){
            if (raiz)
                return *raiz;
            throw "Arbol vacio";
        }
        
        bool esVacio(){
            return raiz == NULL;
        }
        
        Nodo * hijoIzdo(){
            if(raiz)
                return raiz->subArbolIzdo();
            throw "Arbol vacio";    
        }

        Nodo * hijoDcho(){
            if(raiz)
                return raiz->subArbolDcho();
            throw "Arbol vacio";
        }

        Nodo* nuevoArbol(Nodo* ramaIzqda , TipoElemento dato, Nodo* ramaDrcha){
            return new Nodo(dato, ramaIzqda, ramaDrcha);
        }
};