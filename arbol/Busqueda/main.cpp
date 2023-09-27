
#include <iostream>
#include "arbol.cpp"
int main(){
    ArbolBinario arbol;

    //for (int i = 0; i < 10; i++)
      //  arbol.insertar(i);
    arbol.insertar(10);
    arbol.insertar(8);
    arbol.insertar(2);
    arbol.insertar(22);
    arbol.insertar(0);
    
    arbol.recorrido();
    std::cout << std::endl;
    
    return 0;
}