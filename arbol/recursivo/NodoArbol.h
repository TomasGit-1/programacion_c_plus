#include <string>
typedef std::string TipoElemento;

#ifndef __NODO_H
#define __NODO_H

class Nodo{
    protected:
        TipoElemento dato;
        Nodo *izdo;
        Nodo *dcho;

    public:
        Nodo(TipoElemento valor){
            dato = valor;
            izdo = dcho = NULL;
        }
        Nodo(TipoElemento valor, Nodo* ramaIzdo, Nodo* ramaDcho){
            dato = valor;
            izdo = ramaIzdo;
            dcho = ramaDcho;
        }
        //Operacones de acceso
        TipoElemento valorNodo(){ return dato;}
        Nodo* subArbolIzdo(){ return izdo;}
        Nodo* subArbolDcho(){ return dcho;}
        
        //Operaciones de modificacion
        void nuevoValor(TipoElemento d){dato = d;}
        void ramaIzdo(Nodo* n){izdo = n;}
        void ramaDcho(Nodo* n){dcho = n;}

};

#endif;