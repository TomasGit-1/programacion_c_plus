//Para que podamos ocupar cualquier tipo 
template <class T> class NodoGenerico{

    protected:
        T dato;
        NodoGenerico <T>* enlace;

    public:
        NodoGenerico(T t){
            dato = t; 
            enlace = 0;           
        }    
        
        NodoGenerico(T p, NodoGenerico<T>* n){
            dato = p;
            enlace = n;
        }

        T datoNodo() const{
            return dato;
        }

        NodoGenerico<T>* enlaceNodo() const{
            return enlace;
        }

        void ponerEnlace(NodoGenerico<T>* sgte){
            enlace = sgte;
        }        
};