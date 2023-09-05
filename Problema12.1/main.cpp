#include <fstream>
#include "colaGenerica.h"
#include "fileController.h"
#include "Lista.h"

int main(){
    FileController obj_file;
    Lista lista_direcciones;
    //Depende de como ejecute el programa
    //filename = "..//bd.txt"
    std::string filename = "bd.txt";
    std::ifstream file_content(filename);
    if(!file_content.is_open()){
        std::cerr << "Error al abrir el archivo" << std::endl;
    }
    std::string line;
    while (std::getline(file_content, line)){

        ColaGenerica<std::string>colaG1;
        colaG1.insertar(line);
        ColaGenerica<std::string>* colaP = &colaG1;

        std::cout << line << std::endl;        
        std::cout << colaP << std::endl;

        //lista_direcciones.insertarCabezaLista(&colaP);
        //Guardamos en la lista
    }
    file_content.close();

    lista_direcciones.visualizar();
    return 0;
}