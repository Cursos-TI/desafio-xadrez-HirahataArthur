#include <stdio.h>

    void moverTorre(int casa){ //Recursividade para o movimento da torre, substituindo os loops simples
        if (casa > 0){
            printf("Direita \n");
            moverTorre(casa - 1);
    }
    }
    void moverBispo(int casa2){ //Rescursividade para o movimento ddo bispo usando loop aninhado
        for (int casaV = 1; casaV <= casa2; casaV++){ //casaV = Verticais
            for (int casaH = 5; casaH <= casa2; casaH++) //casaH = Horizontais
            {
                printf("Direita ");
            }
            printf("Cima\n");
        }
    }
    void moverRainha(int casa3){ //Recursividade para o movimento da rainha, substituindo os loops simples
        if (casa3 > 0){
            printf("Esquerda \n");
            moverRainha(casa3 - 1);
        }
    }
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    printf("Torre\n\n"); // movimento da torre
    moverTorre(5);

    printf("\n\nBispo\n\n");// utilizando o 'while' para imprimir o numero de casas andadas pelo bisto para cima e direita
    moverBispo(5);

    printf("\n\nRainha\n\n"); //movimento da rainha com 'do-while'
    moverRainha(8);
    
    printf("\n\nCavalo\n\n");
    int knightmove = 1; //variavel declarada para movimento do cavalo

    //loop aninhado para o movimento do cavalo
    do //loop externo
    {

        for (int i = 1; i <= 2 && i >= 0; i++) // loop interno com multiplas condicoes
        {
            printf("Baixo\n"); //imprime 2x, pois o loop so eh interrompido uma vez que 'i' seja maior que 2, o que requer 2 execucoes
        }
        printf("Esquerda\n"); /* imprime apenas 1x, pois o loop externo so age enquanto 'knightmove' for diferente de 0, 
        uma vez que se subtrai 1 a cada loop, e a variavel vale inicialmente 1, entao eh necessario apenas 1 execucao completa do loop externo,
        resultando em apenas 1 impressao*/

    knightmove--; //subtrai 1 de 'knightmove' a cada execucao completa o loop
    } while (knightmove !=0);
    
    
    
    
    return 0;
}
