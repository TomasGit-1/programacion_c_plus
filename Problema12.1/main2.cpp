#include <fstream>
#include "colaGenerica.h"
#include "Lista.h"

template <class T>
T elementoEnFrente;

int main(){
    int MAX_COLAS =26;

    std::string filename = "bd.txt";
    std::ifstream file_content(filename);

    if(!file_content.is_open()){
        std::cerr << "Error al abriri el archivo" << std::endl;
        return 0;
    }

    ColaGenerica<std::string>* arrayDePunteros[10];
    ColaGenerica<std::string> colaGPalabras;
    std::string line;    

    while(std::getline(file_content, line))
        colaGPalabras.insertar(line);
    std::cout << "==========Palabras=============" << std::endl;
    colaGPalabras.mostrarCola();
    std::cout<<std::endl;

    file_content.close();

    //std::cout << "==========================" << std::endl;
    for (int i = 0; i < MAX_COLAS-1; i++)
        arrayDePunteros[i] = new ColaGenerica<std::string> ;

//    std::cout << "==========================" << std::endl;
    while (!colaGPalabras.colaVacia()){
        elementoEnFrente<std::string> = colaGPalabras.frenteCola();
        ///std::cout <<"Elemento:"<<elementoEnFrente<std::string> << std::endl;
        for(int j = 0; j < MAX_COLAS-1; j++){
            //std::cout<<"j : " <<j << std::endl;
            if(arrayDePunteros[j]->colaVacia()){
                //std::cout<<"Cola Vacia ["<<j <<"] insertamos un primer valor"<< std::endl;
                arrayDePunteros[j] -> insertar(elementoEnFrente<std::string>);
                colaGPalabras.quitar();
                break;               
            }else{
                //std::cout <<"Frente cola : "<<arrayDePunteros[j]->frenteCola()[0] << std::endl;
                if(elementoEnFrente<std::string>[0] == arrayDePunteros[j]->frenteCola()[0]){
                    //std::cout <<"Insertamos en Cola "<<j<< std::endl;
                    arrayDePunteros[j] -> insertar(elementoEnFrente<std::string>);
                    colaGPalabras.quitar();
                    break;
                }
            }
        }
        //std::cout << "==========================" << std::endl;
        //std::cout<<std::endl;
    }
    

    std::cout << "============= C O L A S =============" << std::endl;

    for (int i = 0; i <MAX_COLAS -1; i++){
        if (!arrayDePunteros[i]->colaVacia()){
            std::cout << "=============Cola ["<< i <<"] =============" << std::endl;
            //std::cout << arrayDePunteros[i] << std::endl;
            arrayDePunteros[i]->mostrarCola();
            std::cout <<"============================"<<std::endl;
        }        
    }
    

    return 0;
}