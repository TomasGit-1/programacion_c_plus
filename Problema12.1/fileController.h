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

    int read_file(std::string filename){
        std::ifstream file_content(filename);

        if(!file_content.is_open()){
            std::cerr << "Error al abrir el archivo" << std::endl;
            return 0;
        }

        std::string line;
        while (std::getline(file_content, line)){
            std::cout << line << std::endl;
        }
        file_content.close();
        return 1;
    }
    

};