#include <iostream>
#ifndef COLAGENERICA_H
#define COLAGENERICA_H

template <class T> class ColaGenerica{
    protected:
        class NodoCola{
            public:     
                NodoCola* siguiente;
                T elemento;
                NodoCola(T x){
                    elemento = x;
                    siguiente = nullptr;
                }
        };
        NodoCola* frente;
        NodoCola* final;

    public:
        ColaGenerica(){
            frente = final = nullptr;   
        }
        void insertar(T elemento);
        T quitar();
        void borrarCola();
        T frenteCola() const ;
        bool colaVacia() const;
        void mostrarCola() const;
        ~ColaGenerica(){
            borrarCola ();
        }
};

template <class T> void ColaGenerica<T> :: insertar(T elemento){
    NodoCola* nuevo;
    nuevo = new NodoCola(elemento);
    if(colaVacia())
        frente = nuevo;
    else
        final -> siguiente = nuevo;
    final = nuevo;
};

template <class T> T ColaGenerica<T> :: quitar(){
    if(colaVacia())
        throw "Cola vacia, no se puede extraer";
    T aux = frente -> elemento;
    NodoCola* a = frente;
    frente = frente -> siguiente;
    delete a;
    return aux;
};

template <class T> T ColaGenerica<T> :: frenteCola() const {
    if (colaVacia())
        throw "Cola vacia";
    return frente -> elemento;
};

template <class T> void ColaGenerica<T> :: borrarCola(){
    for (;frente != nullptr;){
        NodoCola* a;
        a = frente;
        frente = frente -> siguiente;
        delete a;
    }
    final = nullptr;
};

template <class T> bool ColaGenerica<T> :: colaVacia() const { 
    return frente == nullptr;
};

template <class T> void ColaGenerica<T> :: mostrarCola() const{
    NodoCola* actual;
    actual = frente;
    while(actual != NULL){
        std::cout<<actual->elemento<<std::endl;
        actual = actual->siguiente;
    };
};


#endif // COLAGENERICA_H
