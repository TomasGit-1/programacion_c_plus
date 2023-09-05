#include <fstream>
#include "colaGenerica.h"
#include "fileController.h"
#include "Lista.h" 
#include <vector>   
template <class T> 
T elementoEnFrente;
int main(){
    FileController obj_file;
    Lista lista_direcciones;
     ColaGenerica<std::string>* arrayDePunteros[5]; 
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


    ColaGenerica<std::string>colaGA;
    arrayDePunteros[0] = &colaGA;
    ColaGenerica<std::string>colaGC;
    arrayDePunteros[1] = &colaGC;
    ColaGenerica<std::string>colaGM;
    arrayDePunteros[2] = &colaGM;
    ColaGenerica<std::string>colaGD;
    arrayDePunteros[3] = &colaGD;
    ColaGenerica<std::string>colaGG;
    arrayDePunteros[4] = &colaGG;



    for(int i=0; i<14; i++){
        elementoEnFrente<std::string> = colaGPalabras.frenteCola();
        //std::cout << "El elemento en frente de la cola de palabras es: " << elementoEnFrente<std::string>[0] << std::endl;
        switch (elementoEnFrente<std::string>[0]){
        case 'A':
            /* code */
            arrayDePunteros[0]->insertar(elementoEnFrente<std::string>);
            break;
        case 'C':
            /* code */
            arrayDePunteros[1]->insertar(elementoEnFrente<std::string>);
            break;
        case 'M':
            /* code */
            arrayDePunteros[2]->insertar(elementoEnFrente<std::string>);
            break;
        case 'D':
            /* code */
            arrayDePunteros[3]->insertar(elementoEnFrente<std::string>);
            break;
        case 'G':
            /* code */
            arrayDePunteros[4]->insertar(elementoEnFrente<std::string>);
            break;
        default:
            break;
        }
        colaGPalabras.quitar();
    }
    for (int i = 0; i <4; i++){
        arrayDePunteros[i]->mostrarCola();
        std::cout <<"============================"<<std::endl;
    }


    //std::cout << colaP << std::endl;
    //Guardamos en la lista

    return 0;
}