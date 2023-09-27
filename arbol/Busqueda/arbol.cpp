#include <iostream>

class ArbolBinario{
    public:
        class Nodo{
            public:
                int dato;
                Nodo* izquierdo;
                Nodo* derecho;
                //Contrurctor
                Nodo(int valor){
                    dato = valor;
                    izquierdo = nullptr;
                    derecho =nullptr;
                }
        };

        Nodo* raiz;
        Nodo* insertarRecursivo(Nodo* nodo, int valor) {
            if (nodo == nullptr)
                return new Nodo(valor);
            
            if (valor < nodo->dato)
                nodo->izquierdo = insertarRecursivo(nodo->izquierdo, valor);
            else
                nodo->derecho = insertarRecursivo(nodo->derecho, valor);
                //valor > nodo->dato
            return nodo;
        }

        void recorridoRecursivoInOrden(Nodo* nodo){
            if(nodo == nullptr)
                return;
            recorridoRecursivoInOrden(nodo->izquierdo);
            std::cout <<  nodo->dato << " ";
            recorridoRecursivoInOrden(nodo->derecho);   
        }

        void recorridoPreOrdenRecursivo(Nodo* nodo) {
            if (nodo == nullptr)
                return;

            std::cout << nodo->dato << " ";
            recorridoPreOrdenRecursivo(nodo->izquierdo);
            recorridoPreOrdenRecursivo(nodo->derecho);
        }

        void recorridoPostOrdenRecursivo(Nodo* nodo) {
            if (nodo == nullptr)
                return;

            recorridoPostOrdenRecursivo(nodo->izquierdo);
            recorridoPostOrdenRecursivo(nodo->derecho);
            std::cout << nodo->dato << " ";
        }

    public:
        ArbolBinario() : raiz(nullptr){}

        void insertar(int valor) {
            raiz = insertarRecursivo(raiz, valor);
        }
        void recorrido(){
            std::cout <<"Recorrido en Inorden IND"<<std::endl;
            recorridoRecursivoInOrden(raiz);
            std::cout<<""<<std::endl;

            std::cout <<"Recorrido en PreOrden NID"<<std::endl;
            recorridoPreOrdenRecursivo(raiz);
            std::cout<<""<<std::endl;
            std::cout <<"Recorrido en PostOrden IDN"<<std::endl;
            recorridoPostOrdenRecursivo(raiz);
        }


};

