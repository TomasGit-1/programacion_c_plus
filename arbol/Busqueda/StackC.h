#include <iostream>
class StackC{
  
    private:
        int cima;
        int tamanio;
        int *almacen = nullptr;

    public:
        StackC(int tam_stack){ 
            cima = -1;
            almacen = new int[tam_stack];
        }        
        void pushValue(int value);
        void popValue();
        void showStack() const;
        void showStackChar() const;
        bool isEmptyStack() const;
        bool overflowStack() const;
        bool validatExpression(std::string expression);
};