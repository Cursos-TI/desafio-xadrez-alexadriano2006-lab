#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

     int bispo = 5; // declaro a constante bispo, limitando a 5 movimentos

     while (bispo <= 5) // enquanto a condição for verdadeira o loop ira se repetir, até que encontre uma condição falsa e encerre o progama
     {
        printf("BISPO: %d casas na diagonal superior direita\n", bispo); //apresenta o movimento realizado e quantidade de casas movidas
        bispo++; //incrementa a variavel para que o loop encontre a saida
     }
     

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    int torre = 5; // declaro a constante torre, limitando a 5 movimentos
    do
    {

    printf("Torre: %d casas para a direita\n", torre); //apresenta o movimento realizado e quantidade de casas movidas 
    torre++; //incrementa a variavel para que o loop encontre a saida

    } while (torre <= 5); // enquanto a condição for verdadeira o loop ira se repetir, até que encontre uma condição falsa e encerre o progama
    

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    int rainha = 8;

    for (rainha = 8; rainha <= 8; rainha++) // enquanto a condição for verdadeira, o loop ira se repetir incrementando, até que encontre uma condição falsa e encerre o progama
    {
    
        printf("RAINHA: %d casas para a esquerda\n", rainha); //apresenta o movimento realizado e quantidade de casas movidas

    }

    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    int casas_baixo = 2; // dando lógica ao movimento de casas movidas
    int casas_esquerda = 1; // dando lógica ao movimento de casas movidas

    printf("\nCavalo:\n");

    do
    {
        for (casas_baixo = 1; casas_baixo <=2; casas_baixo++) // o For ira definir quantos movimentos o cavalo ira fazer para baixo
        {
            printf("Baixo\n");
        }

        printf("Esquerda\n");
        casas_esquerda--; // decrementando para que a condição se torne falsa e o loop se encerre
        
    } while (casas_esquerda > 0); //verifica se a condição e falsa e encerra o progama
    
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
