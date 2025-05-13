#include "vetor2d.h" //inclui o cabeçalho da classe .h


    //lê-se: Implementando setX que pertence a vetor2d
void Vetor2d::setX(float x_){
    if (x_ > 0){

        x  = x_; //x_ serve para diferenciar do x pertecente a classe
    }
    else{
        x = 0;
    }
}

    //lê-se: Implementando getX que pertence a vetor2d
float Vetor2d::getX(void){
    return x;
}



