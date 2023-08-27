#include "stack.cpp"

int main(){
    std::string expression = "(2 + 3) * (4 & 7)";    
    //std::string expression = "(2 + 3) * ( (4 & 7";    
    StackC obj_stack(expression.length());
    bool resp = obj_stack.validatExpression(expression);
    if(resp)
        std::cout << "Expresion valida"<<std::endl;
    else
        std::cout << "Expresion Invalidad"<<std::endl;
    obj_stack.showStackChar();
    return 0;
}