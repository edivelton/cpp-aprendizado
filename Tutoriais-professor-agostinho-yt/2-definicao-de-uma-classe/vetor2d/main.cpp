//INicialmente será tudo criado em um único código
#include <iostream>

//criando uma classe:
class Vetor2d{
private:
    float x, y; //variáveis privadas da classe
public:
    //métodos da classe para lidar com a variável x:
    void setX(float x_){
        if (x_ > 0){

            x  = x_; //x_ serve para diferenciar do x pertecente a classe
        }
        else{
            x = 0;
        }
    }
    float getX(void){
        return x;
    }


};

int main()
{
    Vetor2d v; //criando um objeto v do tipo vetor2d
    v.setX(-3); //chamando o método da classe responsável por passar um valor de x
    // v.x = 3; Isso dará um erro, pois NÃO É POSSÍVEL acessar diretamente uma variável privada da classe (está encapsulada)
    //Só seria possível caso x fosse público.

    std::cout << v.getX() << std::endl; //imprimindo o valor de x chamado o método getX(), que é responsável por retornar o valor
    return 0;
}
