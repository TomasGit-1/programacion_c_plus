#include "colaGenerica.h"
#include <iostream>
#include <fstream>
#include <string>

class FileController{
    public:
        std::string  filename = "";

    FileController(){}
    FileController(std::string name){
        filename = name;
    }

    ColaGenerica<std::string> read_file(std::string filename){
        ColaGenerica<std::string> colaG1;

        std::ifstream file_content(filename);
        if(!file_content.is_open()){
            std::cerr << "Error al abrir el archivo" << std::endl;
        }
        std::string line;
        while (std::getline(file_content, line)){
            std::cout << line << std::endl;
            colaG1.insertar(line);
        }
        file_content.close();
        return colaG1;
    }

};