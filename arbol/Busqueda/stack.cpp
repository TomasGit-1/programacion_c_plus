#include "StackC.h"
#include <iostream>

bool StackC::isEmptyStack() const{
    return cima == -1;
};

bool StackC::overflowStack() const{
    return tamanio == cima -1;            
};

void StackC::pushValue(int value){
    if(overflowStack())
        throw "La pila esta llena";    
    cima ++;
    almacen[cima] = value;
};

void StackC::popValue(){
    if(isEmptyStack())
        throw "La pila esta vacia";
    almacen[cima] = -1;
    cima --;
};

void StackC::showStack() const{
    if(isEmptyStack())
        throw "La pila esta vacia";
    
    for(int i=0; i <= cima; i++)
        std::cout<<"["<<almacen[i]<<"]"<<std::endl;
    
};

void StackC::showStackChar() const{
    if(isEmptyStack())
        throw "La pila esta vacia";
    for(int i = 0; i <= cima; i++)
        std::cout<<"[ "<<static_cast<char>(almacen[i])<<" ]"<<std::endl;
}

bool StackC::validatExpression(std::string expression){
    for (char caracter : expression){
        if(caracter == '(')
            this->pushValue(caracter); 
        else if(caracter == ')')
            this->popValue();    
    }
    return isEmptyStack();    
};









