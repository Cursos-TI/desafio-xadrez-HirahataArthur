#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    printf("Torre\n\n"); // movimento da torre
    for (int t = 1; t <= 5; t++)//utilizando o 'for' para imprimir o numero de casas andadas pela torre para a direita
    {
        printf("Direita\n");
    }

    printf("\n\nBispo\n\n");// utilizando o 'while' para imprimir o numero de casas andadas pelo bisto para cima e direita
    int b=1; // variavel b = BISPO
    while (b <=5) // enquanto bispo for menor ou igual a 5, imprimir 'Cima direita' + numero da casa
    {
       printf("Cima\n");
       printf("Direita\n");
       b++;// adicionar 1 casa cada vez que impressa a informacao
    }

    printf("\n\nRainha\n\n"); //movimento da rainha com 'do-while'
    int r =1;// variavel r = RAINHA
    do
    {         // imprime 1 primeira vez sem considerar a condicao
        printf("Esquerda\n");  // depois adiciona +1 casa e imprime novamente ate que 'r' seja maior que 8
        r++; // para impedir loop infinito e adicionar uma casa sempre que houver impressao
    } while (r <= 8); // condicao para repeticao do comando dentro de 'do'
    
    printf("\n\nCavalo\n\n");
    int knightmove = 1; //variavel declarada para movimento do cavalo

    //loop aninhado para o movimento do cavalo
    do //loop externo
    {

        for (int i = 1; i <= 2; i++) // loop interno
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
