#include <iostream>
#include "Punto.cpp"
//Punto p1(2, 3);  // Objecto creado de forma estatica
// Punto* p2 = new Punto(2, 3); //Objecto creado dinamicamente

int main() {
    Punto p1(2, 3); //
    int x = p1.leerX();
    int y = p1.leerY();
    std::cout<<"x = "<<x<<std::endl<<" y = "<<y<<std::endl;
}
