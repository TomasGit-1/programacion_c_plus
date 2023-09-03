#include <iostream>
#include "ColaLineal.h"

int main(){
    ColaLineal obj_cola;
    //int value = obj_cola.frenteCola();
    obj_cola.insertar(5);
    obj_cola.insertar(15);
    obj_cola.insertar(52);
    obj_cola.insertar(10);
    obj_cola.insertar(8);
    obj_cola.mostrarCola();
    return 0;
}