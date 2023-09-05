#include <fstream>
#include "colaGenerica.h"
#include "fileController.h"
#include "Lista.h"    
template <class T> 
T elementoEnFrente;
int main(){
    FileController obj_file;
    Lista lista_direcciones;
    int* arrayDePunteros[5]; 
    //Palabras
    ColaGenerica<std::string>colaGPalabras;
    
    //Depende de como ejecute el programa
    //filename = "..//bd.txt"
    std::string filename = "bd.txt";
    std::ifstream file_content(filename);

    if(!file_content.is_open())
        std::cerr << "Error al abrir el archivo" << std::endl;
    
    std::string line;
    
    while (std::getline(file_content, line)){
        colaGPalabras.insertar(line);
        std::cout << line << std::endl;        
    }
    file_content.close();

    for(int i=0; i<5; i++){
        elementoEnFrente<std::string> = colaGPalabras.frenteCola();
        std::cout << "El elemento en frente de la cola de palabras es: " << elementoEnFrente<std::string> << std::endl;
        colaGPalabras.quitar();
    }


    //std::cout << colaP << std::endl;
    //Guardamos en la lista

    return 0;
}