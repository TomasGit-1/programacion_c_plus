#include <iostream>
#include <stack>
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

        void recorridoNorecursivo(){
            std::cout<<"---------------"<<std::endl;
            std::cout << "Recorrido No recursivo"<< std::endl;
            recorridoInOrden();
            std::cout << std::endl;
            recorridoPreOrden();
            std::cout << std::endl;
            recorridoPostOrden();
        }


        void recorridoInOrden(){
            std::cout<<"Recorrido en InOrden IND"<<std::endl;
            std::stack<Nodo*> stack_memoria;
            Nodo* nodo_actual = raiz;
            while (nodo_actual || !stack_memoria.empty()){
                //Entramos al nodo si no es null
                while(nodo_actual){
                    //Nos vamos todo a la izquierda
                    stack_memoria.push(nodo_actual);
                    nodo_actual = nodo_actual->izquierdo;
                }
                //[1,2,3,4,5]
                //Obtenemos la cima de la Pila
                nodo_actual = stack_memoria.top();
                stack_memoria.pop();
                std::cout << nodo_actual->dato<< " ";
                //Nos movemos a la derecha si existe
                nodo_actual = nodo_actual->derecho;
            }   
        }
        
        void recorridoPreOrden(){
            std::cout <<"Recorrido en PreOrden NID"<<std::endl;
            std::stack<Nodo*> stack_memoria;
            stack_memoria.push(raiz);
            while (!stack_memoria.empty()){
                Nodo* nodo_temp = stack_memoria.top();
                stack_memoria.pop();
                std::cout << nodo_temp->dato << " ";

                if(nodo_temp -> derecho)
                    stack_memoria.push(nodo_temp->derecho);

                if(nodo_temp -> izquierdo)
                    stack_memoria.push(nodo_temp->izquierdo);
            }
        }

        void recorridoPostOrden(){
            std::cout <<"Recorrido en PostOrden IDN"<<std::endl;
            std::stack<Nodo*> stack_memoria;
            std::stack<int> stack_valores;
            stack_memoria.push(raiz);

            while (!stack_memoria.empty()){
                Nodo* nodo_temp = stack_memoria.top();
                stack_memoria.pop();
                stack_valores.push(nodo_temp->dato);
                
                if(nodo_temp -> izquierdo)
                    stack_memoria.push(nodo_temp->izquierdo);

                if(nodo_temp -> derecho)
                    stack_memoria.push(nodo_temp->derecho);
            }

            while (!stack_valores.empty()){
                int dato_actual = stack_valores.top();
                std::cout << dato_actual << " ";
                stack_valores.pop();
             }
            std::cout << std::endl;
            /*
            while (nodo_actual || !stack_memoria.empty()){
                while (nodo_actual){
                    stack_memoria.push(nodo_actual);
                    nodo_actual = nodo_actual->izquierdo;
                }

                nodo_actual = stack_memoria.top();
                std::cout << nodo_actual << std::endl;
                if(nodo_actual->izquierdo && nodo_actual->derecho)
                    stack_memoria.pop();                    
                
                nodo_actual = stack_memoria.top();
                nodo_actual = nodo_actual->derecho;
            }
            */

         }

};

