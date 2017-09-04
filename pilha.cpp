#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <string>

    using namespace std;

    Pilha::Pilha(){
        vetor.push_back('X');
    }

    void Pilha::resetaPilha(){
        for(int i = 0; i < vetor.size(); i++)
            vetor.pop_back();
        vetor.push_back('X');
    }

    void Pilha::inserePilha(char simboloPilha){
        vetor.push_back(simboloPilha);
        printf("\n ### inseriu %c ###", simboloPilha);
        printaPilha();
    }

    void Pilha::removePilha(){
        /*
        std::vector<char>::iterator it;
        it = vetor.begin();
        if(vetor.size()+1 == 1)
            it = vetor.insert (it, ';');
        */
        vetor.pop_back();
        printf("\n      ### REMOVEU ###\n");
        printaPilha();
    }

    void Pilha::funcaoTeste(){
        printf("\n##teste:%p\n\n", vetor.begin());
    }

    char Pilha::retornaBaseAtual(){
        if(vetor.size() == 0)
            return '#';
        else
            return vetor.at(vetor.size()-1);
    }

    int Pilha::verificaPilhaVazia(){

        if(vetor.size() == 0)
            return 1;
        else
            return 0;
    }

    std::vector<char> Pilha::getVetorPilha(){
        return vetor;
    }


    void Pilha::printaPilha(){

        int j = 0;
        printf("\n##PILHA:\n");
        for(std::vector<char>::iterator i = vetor.begin(); i != vetor.end(); i++){
            cout << j << ": " << *i << endl;
            j++;
        }
        printf("\n\n__________________________________________\n\n");


    }
