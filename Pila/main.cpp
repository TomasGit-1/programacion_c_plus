#include "stack.cpp"
int main(){
    //Se declara la pila con 
    StackC obj_stack(5);
    obj_stack.pushValue(12);
    obj_stack.pushValue(1);
    obj_stack.pushValue(23);
    obj_stack.pushValue(12);
    obj_stack.pushValue(6);
    obj_stack.pushValue(22);
    obj_stack.showStack();
    return 0;
}
/*
    Ejemplo a evaluar
    Validación de paréntesis en expresiones
    matemáticas: 
    Al analizar expresiones matemáticas, 
    puedes usar una pila para verificar 
    si los paréntesis están balanceados
    correctamente. 
    Cada vez que encuentras un paréntesis de apertura,
    lo agregas a la pila.
    Cuando encuentras un paréntesis de cierre,
    retiras un paréntesis de apertura de la pila.
    Si la pila está vacía al final del análisis,
    los paréntesis están balanceados.
*/