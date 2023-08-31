#include "stack.cpp"
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
int main(){    //std::string expression = "(2 + 3) * (4- 7)";    
    std::string expression = "(2 + 3) * ( (4 & 7";    
    StackC obj_stack(expression.length());
    bool resp = obj_stack.validatExpression(expression);
    if(resp)
        std::cout << "Expresion valida"<<std::endl;
    else
        std::cout << "Expresion Invalidad"<<std::endl;
    obj_stack.showStackChar();
    return 0;
}