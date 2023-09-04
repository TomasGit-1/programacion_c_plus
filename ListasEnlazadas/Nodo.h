/*
    Una lista enlazada se compone de una serie de nodos enlazados mediante punteros.
    la clase Nodo declara las dos partes en que se divide : dato y enlace. Ademas,
    el constructor y la interfaz basica; por ejemplo, para el caso de una lista enlazada de numeros enteros:     
*/
typedef int Dato;
#ifndef __NODO_H
#define __NODO_H

class Nodo{

    protected:
        Dato dato;
        Nodo* enlace;
    public:
        
        Nodo(Dato t){
            dato = t;
            enlace = 0; // 0 es el puntero NULL en C++
        }
        //Crear el nodo y lo enlaza a n
        Nodo(Dato p, Nodo* n){
            dato = p;
            enlace = n; 
        }

        Dato datoNodo()const{
            return dato;
        }

        Nodo* enlaceNodo() const{
            return enlace;
        }

        void ponerEnlace(Nodo* sgte){
            enlace = sgte;
        }
};

#endif

