#ifndef LF_H
#define LF_H

#include <vector>
#include <string>
#include "pilha.h"

class LinFormal : public Pilha {


private:

    /*std::vector<std::string> conj_estados;
       std::vector<char> alfabeto_entrada;
     *std::vector<char> alfabeto_pilha;
     */

    std::vector<std::string> vetor_ftransicao;




public:

    LinFormal() : Pilha(){};
    void insereFuncTransicao(std::string funcao_transicao);
    void printaFuncTransicao();
    void verificaTransicao(char entradaLetra);
    //void insereLetraVetor(char entradaLetra);
    void recebeEntrada(std::string entradaAlfabeto);
    void zeraPilha();







};




#endif // LF_H
