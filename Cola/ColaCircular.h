#include "ColaLineal.h"

class ColaCircular : public ColaLineal{
    protected:
        int siguiente(int r ){
            return (r+1) % MAXTAMQ;
        }
    public:
        ColaCircular(){
            frente = 0;
            final = MAXTAMQ - 1;
        }
        void insertar(const TipoDeDato& elmento);
        TipoDeDato quitar();
        void borrarCola();
        TipoDeDato frenteCola();
        bool colaVacia();
        bool colaLlena(); 
        void mostrarCola();      
};

//Implementacion

void ColaCircular :: insertar(const TipoDeDato & elemento){
    if (colaLlena())
        throw "Overflow en la cola";
    final = siguiente(final);
    listaCola[final] = elemento;
};

TipoDeDato ColaCircular :: quitar(){
    if(colaVacia()){
        throw "Cola vacia";
    }
    TipoDeDato tm = listaCola[frente];
    frente = siguiente(frente);
    return tm;    
};

void ColaCircular :: borrarCola(){
    frente = 0;
    final = MAXTAMQ - 1;
};

TipoDeDato ColaCircular :: frenteCola(){
    if (colaVacia())
        throw "Cola vacia";
    return listaCola[frente];
};

bool ColaCircular :: colaVacia(){
    return frente == siguiente(final);
}

bool ColaCircular :: colaLlena(){
    return frente == siguiente(siguiente(final));
}
void ColaCircular :: mostrarCola(){
    for(int i=frente; i<MAXTAMQ - 1; i++){
        std::cout<<listaCola[i]<<std::endl;
    }
}
