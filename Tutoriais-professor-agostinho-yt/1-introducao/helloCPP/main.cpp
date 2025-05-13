#include <iostream>
#include "funcao1.hpp"
#include "funcao2.hpp"

using namespace std;

int main()
{
    cout << "Hello C++!" << endl;
    funcao1();
    funcao2();
    return 0;
}


//Nesse projetinho vimos: Que o C++ une os diferentes arquivos na hora da compilação, ou seja, ele compilou o main.cpp e gerou o main.o
//o funcao1.cpp e .hpp e gerou o funcao1.o e o funcao2.cpp e hpp e gerou o funcao2.o
//Outra coisa interessante é que na hora da compilação apenas alguma função que foi editada será compilada, as outras não editadas não precisam compilar denovo
