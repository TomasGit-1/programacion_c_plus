template <class T>
class ColaGenerica{
    protected:
        class NodoCola{
            public:     
                NodoCola* siguiente;
                T elemento;
                NodoCola(T x){
                    elemento = x;
                    siguiente = NULL;
                }
        };
        NodoCola* frente;
        NodoCola* final;

    public:
        ColaGenerica(){
            frente = final = NULL;   
        }
        void insertar(T elemento);
        T quitar();
        void borrarCola();
        T frenteCola() const ;
        bool colaVacia() const;
        ~ColaGenerica(){
            borrarCola ();
        }
};

void ColaGenerica<T> :: insertar(T elemento){
    NodoCola* nuevo;
    nuevo = new NodoCola(elemento);
    if(colaVacia())
        frente = nuevo;
    else
        final -> siguiente = nuevo;
    final = Nuevo;
}

T ColaGenerica<T> :: quitar(){
    if(colaVacia())
        throw "Cola vacia, no se puede extraer";
    T aux = frente -> siguiente;
    NodoCola* a = frente;
    frente = frente -> siguiente;
    delete a;
    return aux;
}

T ColaGenerica<T> :: frenteCola() const {
    if (colaVacia())
        throw "Cola vacia";
    return frente -> elemento;
}

void ColaGenerica<T> :: borrarCola(){
    for (;frente != NULL;){
        NodoCola* a;
        a = frente;
        frente = frente -> siguiente;
        delete a;
    }
    final = NULL;
}

bool ColaGenerica<T> :: colaVacia() const { 
    return frente == NULL;
}



