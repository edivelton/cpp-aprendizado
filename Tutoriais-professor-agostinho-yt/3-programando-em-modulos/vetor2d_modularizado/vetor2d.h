// Diretiva de compilação combinacional: basicamente um header pode ser incluido em vários arquivos e isso evita redeclarar a mesma classe várias vezes
#ifndef VETOR2D_H // se vetor2d_h não estiver definido na tabela de simbolos, COMPILE TUDO ABAIXO (caso esteja definido já... esse codigo não é recompilado)
#define VETOR2D_H // Defina VETOR2D_H na tabela (compila tudoa té o endif)

//DECLARAÇÃO DA CLASSE: (não tem implementações)

class Vetor2d{
private:
    float x, y; //variáveis privadas da classe
public:
    //somente o protótipo dos métodos da classe no header
    void setX(float x_);
    float getX(void);

};

#endif // VETOR2D_H
