//Inicialmente será tudo criado em um único código
#include <iostream>
#include "vetor2d.h" //header da classe para que vetor2d seja encontrado


//Aqui na função main sou utilizador da classe, não devo me preocupar em como a classe é implementada e sim focar na main()
int main(void)
{
    Vetor2d v; //criando um objeto v do tipo vetor2d
    v.setX(3); //chamando o método da classe responsável por passar um valor de x
    // v.x = 3; Isso dará um erro, pois NÃO É POSSÍVEL acessar diretamente uma variável privada da classe (está encapsulada)
    //Só seria possível caso x fosse público.

    std::cout << v.getX() << std::endl; //imprimindo o valor de x chamado o método getX(), que é responsável por retornar o valor
    return 0;
}
