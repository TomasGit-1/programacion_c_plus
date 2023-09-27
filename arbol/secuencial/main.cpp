#include <iostream>
#include "NodoArbol.h"
#include "arbolLineal.cpp"

int main(){
    Arbolbinario a1, a2, a3, a4, a;
    Nodo *n1, *n2, *n3, *n4;
    
    n1 = a1.nuevoArbol(NULL, "MARIA" , NULL);
    n2 = a2.nuevoArbol(NULL, "Rodrigo" , NULL);
    n3 = a3.nuevoArbol(n1, "Esperanza", n2);

    n1 = a1.nuevoArbol(NULL, "Anyora", NULL);
    n2 = a2.nuevoArbol(NULL, "Abel" , NULL);
    n4 = a4.nuevoArbol(n1, "M jesus", n2);
    n1 = a1.nuevoArbol(n3, "Esperanza", n4);
    a.Praiz(n1);
    
    return 0;
}