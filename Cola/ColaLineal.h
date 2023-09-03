#include <iostream>
typedef int TipoDeDato;
const int MAXTAMQ = 5;

class ColaLineal{
    protected:
        int frente;
        int final;
        int listaCola[MAXTAMQ];

    public:
        ColaLineal (){
            frente = 0;
            final = -1;
        };
        void insertar(const TipoDeDato& elemento){
            if (colaLlena())
                throw "Overflow en la cola";
            listaCola[++final] = elemento;
        }
        TipoDeDato quitar(){
            if(colaVacia())
                throw "Cola Vacia";
            return listaCola[frente++];
        }

        void borrarCola(){
            frente = 0;
            final = -1;
        }

        TipoDeDato frenteCola(){
            if(colaVacia())
                throw "Cola vacia";
            return listaCola[frente];
        }

        bool colaVacia(){
            return frente > final;
        }
        
        bool colaLlena(){
               return final == MAXTAMQ -1;
        }
        void mostrarCola(){
            for(int i=0; i<MAXTAMQ; i++){
                std::cout<<listaCola[i]<<std::endl;
            }
        }
};

