#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("Torre\n\n"); // movimento da torre
    for (int t = 1; t <= 5; t++)//utilizando o 'for' para imprimir o numero de casas andadas pela torre para a direita
    {
        printf("Direita %d\n", t);
    }


    printf("\n\nBispo\n\n");// utilizando o 'while' para imprimir o numero de casas andadas pelo bisto para cima e direita
    int b=1; // variavel b = BISPO
    while (b <=5) // enquanto bispo for menor ou igual a 5, imprimir 'Cima direita' + numero da casa
    {
       printf("Cima direita %d\n", b);
       b++;// adicionar 1 casa cada vez que impressa a informacao
    }

    printf("\n\nRainha\n\n"); //movimento da rainha com 'do-while'
    int r =1;// variavel r = RAINHA
    do
    {         // imprime 1 primeira vez sem considerar a condicao
        printf("Esquerda %d\n", r);  // depois adiciona +1 casa e imprime novamente ate que 'r' seja maior que 8
        r++; // para impedir loop infinito e adicionar uma casa sempre que houver impressao
    } while (r <= 8); // condicao para repeticao do comando dentro de 'do'
    
    
    
    return 0;
}
