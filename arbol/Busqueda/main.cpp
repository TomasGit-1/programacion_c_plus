
#include <iostream>
#include "arbol.cpp"
int main(){
    ArbolBinario arbol;
    arbol.insertar(10);
    arbol.insertar(8);
    arbol.insertar(9);
    arbol.insertar(2);
    arbol.insertar(22);
    arbol.insertar(100);
    //arbol.insertar(20);
    //arbol.insertar(40);
    //arbol.insertar(19);
    //arbol.insertar(4);

    arbol.recorrido();
    std::cout << std::endl;

    arbol.recorridoNorecursivo();
    
    return 0;
}