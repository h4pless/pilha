#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include <vector>
#include "lf.h"
#include <string>
#include <iostream>

int main(void){

    using namespace std;

    Pilha* pilha = new Pilha();
    LinFormal* linguagem_formal = new LinFormal();
    std::string alfabeto_entrada;
    int resp = 1;
    alfabeto_entrada = "aabb"; // ENTRADA DO USUARIO
    std::string entrada_func;
    int i ;

    while(resp){
        printf("Insira a funcao de transicao:   \n\nMODELO: EstadoDeOrigem,LetraDeEntrada,BaseDaPilha,Simbolo,EstadoDeDestino\n\n");
        cin >> entrada_func;
        linguagem_formal->insereFuncTransicao(entrada_func);
        printf("\n\nDeseja inserir mais alguma funcao de transicao?(1-SIM || 0-NAO)\n\n");
        scanf("%d", &resp);
        system("cls");
    }

     pilha->printaPilha();
     linguagem_formal->printaFuncTransicao();
     resp = 1;

        while(resp){
            printf("Insira a palavra a ser testada:\n\n");
            cin >> alfabeto_entrada;


            for(i = 0; i < alfabeto_entrada.size(); i++){
                linguagem_formal->verificaTransicao(alfabeto_entrada.at(i));
                if(i == alfabeto_entrada.size()-1 && linguagem_formal->verificaPilhaVazia() == 1)
                    printf("\n\n\n######PALAVRA ACEITA#######\n\n\n");
            }

            printf("Deseja testar outra palavra?(1-SIM || 0-NAO)\n\n");
            scanf("%d", &resp);
            if(resp = 1){
                linguagem_formal->resetaPilha();
            }
        }




     return 0;

}
        //TESTE 1 a^n b^n
       /*
        *linguagem_formal->insereFuncTransicao("S0,a,X,A,S0");
        *linguagem_formal->insereFuncTransicao("S0,a,A,AA,S0");
        *linguagem_formal->insereFuncTransicao("S0,b,A,#,S1");
        *linguagem_formal->insereFuncTransicao("S1,b,A,#,S1");
        *
        *
        *linguagem_formal->recebeEntrada(alfabeto_entrada);
        *
        *pilha->printaPilha();
        *linguagem_formal->printaFuncTransicao();
        *
        *
        *linguagem_formal->verificaTransicao('a');
        *linguagem_formal->verificaTransicao('a');
        *linguagem_formal->verificaTransicao('a');
        *linguagem_formal->verificaTransicao('b');
        *linguagem_formal->verificaTransicao('b');
        *linguagem_formal->verificaTransicao('b');
        */


        // teste a^n b^m c^p | m = n + p
    /*
     *linguagem_formal->insereFuncTransicao("S0,a,X,A,S0");
     *linguagem_formal->insereFuncTransicao("S0,a,A,AA,S0");
     *linguagem_formal->insereFuncTransicao("S0,b,A,#,S1");
     *linguagem_formal->insereFuncTransicao("S1,b,A,#,S1");
     *linguagem_formal->insereFuncTransicao("S1,b,#,B,S1");
     *linguagem_formal->insereFuncTransicao("S1,b,B,BB,S1");
     *linguagem_formal->insereFuncTransicao("S1,c,B,#,S2");
     *linguagem_formal->insereFuncTransicao("S2,c,B,#,S2");
     *
     *pilha->printaPilha();
     *linguagem_formal->printaFuncTransicao();
     *
     *linguagem_formal->verificaTransicao('a');
     *linguagem_formal->verificaTransicao('a');
     *linguagem_formal->verificaTransicao('a');
     *linguagem_formal->verificaTransicao('b');
     *linguagem_formal->verificaTransicao('b');
     *linguagem_formal->verificaTransicao('b');
     *linguagem_formal->verificaTransicao('b');
     *linguagem_formal->verificaTransicao('c');
     */


     // TESTE a^n b^m c^p | n + m = p
   /*
     linguagem_formal->insereFuncTransicao("S0,a,X,A,S0");
     linguagem_formal->insereFuncTransicao("S0,a,A,AA,S0");
     linguagem_formal->insereFuncTransicao("S0,b,A,AA,S1");
     linguagem_formal->insereFuncTransicao("S1,b,A,AA,S1");
     linguagem_formal->insereFuncTransicao("S1,c,A,#,S2");
     linguagem_formal->insereFuncTransicao("S2,c,A,#,S2");

     pilha->printaPilha();
     linguagem_formal->printaFuncTransicao();

     linguagem_formal->verificaTransicao('a');
     linguagem_formal->verificaTransicao('a');
     linguagem_formal->verificaTransicao('b');
     linguagem_formal->verificaTransicao('c');
     linguagem_formal->verificaTransicao('c');
     linguagem_formal->verificaTransicao('c');
     */

     // TESTE a^n  b^n+2

     /*

        linguagem_formal->insereFuncTransicao("S0,a,X,AAA,S0");
        linguagem_formal->insereFuncTransicao("S0,a,A,AA,S0");
        linguagem_formal->insereFuncTransicao("S0,b,A,#,S1");
        linguagem_formal->insereFuncTransicao("S1,b,A,#,S1");


        pilha->printaPilha();
        linguagem_formal->printaFuncTransicao();


        linguagem_formal->verificaTransicao('a');
        linguagem_formal->verificaTransicao('a');
        linguagem_formal->verificaTransicao('a');
        linguagem_formal->verificaTransicao('b');
        linguagem_formal->verificaTransicao('b');
        linguagem_formal->verificaTransicao('b');
        linguagem_formal->verificaTransicao('b');
        linguagem_formal->verificaTransicao('b');

    */
