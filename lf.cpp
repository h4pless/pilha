#include "lf.h"
#include <string>
#include <vector>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

using namespace std;



void LinFormal::insereFuncTransicao(std::string funcao_transicao){
    vetor_ftransicao.push_back(funcao_transicao);
}

void LinFormal::printaFuncTransicao(){

    int j = 0;
    printf("\n\n##FUNCAO DE TRANSICAO\n\n");
    for(std::vector<std::string>::iterator i = vetor_ftransicao.begin(); i != vetor_ftransicao.end(); i++){
            cout << j << ": " << *i << endl;
            j++;
        }
    printf("\n___________________________________\n");

}

void LinFormal::verificaTransicao(char entradaLetra){


    for(int i = 0; i < vetor_ftransicao.size(); i++){
        if(vetor_ftransicao.at(i).at(3) == entradaLetra){
            if(vetor_ftransicao.at(i).at(5) == retornaBaseAtual()){
                removePilha();
                if(vetor_ftransicao.at(i).at(8) != ','){
                    inserePilha(vetor_ftransicao.at(i).at(8));
                    if(vetor_ftransicao.at(i).at(9) != ',')
                        inserePilha(vetor_ftransicao.at(i).at(9));
                }
                if(vetor_ftransicao.at(i).at(7) == '#'){
                    if(vetor_ftransicao.at(i).at(5) == '#'){
                        printf("\n\n        ###PALAVRA NAO ACEITA####\n\n");
                        break;
                    }
                    if(getVetorPilha().size() == 0){
                        inserePilha('#');
                        inserePilha('#');
                        break;
                    }
                    else
                        break;
                }
                if(vetor_ftransicao.at(i).at(7) != '#'){
                    inserePilha(vetor_ftransicao.at(i).at(7));
                    break;
                }
            }
        }
    }
}



void LinFormal::recebeEntrada(std::string entradaAlfabeto){

    // DEFINE O SIZE DA PALAVRA DE ENTRADA;
        printf("\n");
        for(int i = 0; i < entradaAlfabeto.size(); i++){
            printf("letra no indice %d: %c\n", i, entradaAlfabeto.at(i));
        }
    }
