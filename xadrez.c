#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Função recursiva para movimentação da Torre
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

// Função recursiva para movimentação da Rainha
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

// Função recursiva para movimentação do Bispo
void moverBispo(int casas) {
    if (casas > 0) {
        printf("Cima Direita\n");
        moverBispo(casas - 1);
    }
}

// Função para movimentação do Cavalo
void moverCavalo(int verticais, int horizontais) {
    for (int i = 0; i < verticais; i++) {
        printf("Cima\n");
    }
    for (int j = 0; j < horizontais; j++) {
        printf("Direita\n");
    }
}


int main() {

    int m, n;
    //Movimento da Torre
    printf("\nMovimento da Torre\n");
    movertorre(5);
    for (int i =0; i < 5; i++)
    {
        printf("Direita\n");
    }
    //Movimento do Bispo
    printf("\nMovimento do Bispo\n");
    moverBispo(5);
    int j = 0;
    
    while(j < 5){
        printf("Cima, Direita\n");
        j++;
    }
    //Movomento Rainha
   printf("\nMovimento Rainha\n");
   moverRainha(8);
   int k = 0;
   do{
    printf("\nMovimento esquerda\n");
    k++;

   } while(k < 8);

   //Movimento Cavalo

   printf("\nMovimento do Cavalo\n");
   moverCavalo(5);
    for (m = 0; m <= 2; m++)
    {
        printf("Cima\n");
    } 
    for (n = 0; n <= 1; n++)
    {
        printf("Esquerda\n");
    }


    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
