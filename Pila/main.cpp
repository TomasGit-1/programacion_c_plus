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
