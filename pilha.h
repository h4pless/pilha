#ifndef PILHA_H
#define PILHA_H
#include <vector>
#include <string>

class Pilha{


private:

    std::vector<char> vetor;

public:

    Pilha();

    void inserePilha(char simboloPilha);
    void removePilha();
    void printaPilha();
    void funcaoTeste();
    void recebeEntrada(std::string entradaAlfabeto);
    std::vector<char> getVetorPilha();
    char retornaBaseAtual();
    int verificaPilhaVazia();
    void zeraPilha();
    void resetaPilha();

};




#endif // PILHA_H
