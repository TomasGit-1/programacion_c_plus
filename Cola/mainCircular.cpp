#include "ColaCircular.h"

int main(){
    ColaCircular obj_cola;
    obj_cola.insertar(15);
    obj_cola.insertar(5);
    obj_cola.insertar(2);
    obj_cola.insertar(10);
    obj_cola.mostrarCola();
    obj_cola.quitar();
    //obj_cola.insertar(18);
    std::cout << "........"<< std::endl;
    obj_cola.mostrarCola();
    return 0;
}