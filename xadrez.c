#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Simulação dos movimentos das peças utilizando loops e recursividade


// Função recursiva para mover o bispo na diagonal superior direita
void movimentobispo(int diagonal_direita) {

    // Continua enquanto ainda houver movimentos
    if(diagonal_direita > 0) {

        // Loop para o movimento para a direita
        for (int casasparadireita = 1; casasparadireita <= 1; casasparadireita++) {

            // Loop para o movimento para cima
            for (int casasparacima = 1; casasparacima <= 1; casasparacima++) {
                printf("Cima ");
            }

            printf("Direita\n");
        }

        // Chamada recursiva diminuindo um movimento
        movimentobispo(diagonal_direita - 1);
    }
}


// Função recursiva para mover a torre para a direita
void movimentotorre(int torre_para_direita){

    // Continua enquanto houver movimentos
    if (torre_para_direita > 0) {

        printf("Direita\n");

        // Chamada recursiva
        movimentotorre(torre_para_direita - 1);
    }
}


// Função recursiva para mover a rainha para a esquerda
void movimentorainha(int rainha_para_esquerda){

    // Continua enquanto houver movimentos
    if (rainha_para_esquerda > 0) {

        printf("Esquerda\n");

        // Chamada recursiva
        movimentorainha(rainha_para_esquerda - 1);
    }
}


// Função para simular o movimento do cavalo
void movimentocavalo() {

    printf("CAVALO:\n");

    // Movimento horizontal
    for (int casasparadireita = 1; casasparadireita <= 1; casasparadireita++) {

        // Movimento vertical
        for (int casasparacima = 1; casasparacima <= 3; casasparacima++) {

            // Ignora a última repetição
            if(casasparacima == 3) {
                break;
            }

            printf("Cima\n");
        }

        printf("Direita\n");
    }
}


int main() {

    // NÍVEL NOVATO
    printf("NIVEL NOVATO\n");

    // Quantidade de casas do bispo
    int bispo = 5;

    // Executa o movimento do bispo
    while (bispo <= 5) {

        printf("BISPO: %d casas na diagonal superior direita\n", bispo);

        // Atualiza a variável para encerrar o loop
        bispo++;
    }


    // Quantidade de casas da torre
    int torre = 5;

    // Executa o movimento da torre
    do {

        printf("Torre: %d casas para a direita\n", torre);

        // Atualiza a variável para encerrar o loop
        torre++;

    } while (torre <= 5);


    // Quantidade de casas da rainha
    int rainha = 8;

    // Executa o movimento da rainha
    for (rainha = 8; rainha <= 8; rainha++) {

        printf("RAINHA: %d casas para a esquerda\n", rainha);
    }

    printf("\n");


    // NÍVEL AVENTUREIRO
    printf("NIVEL AVENTUREIRO");

    // Quantidade de movimentos do cavalo
    int casas_baixo = 2;
    int casas_esquerda = 1;

    printf("\nCavalo:\n");

    // Executa o movimento em L do cavalo
    do {

        // Movimento para baixo
        for (casas_baixo = 1; casas_baixo <= 2; casas_baixo++) {

            printf("Baixo\n");
        }

        // Movimento para a esquerda
        printf("Esquerda\n");

        // Atualiza a variável para encerrar o loop
        casas_esquerda--;

    } while (casas_esquerda > 0);

    printf("\n");


    // NÍVEL MESTRE
    printf("NIVEL MESTRE\n");


    // BISPO
    int bispo_quantidade_movimentos = 5;

    printf("Bispo:\n");

    // Executa os movimentos do bispo
    movimentobispo(bispo_quantidade_movimentos);

    printf("\n");


    // TORRE
    int torre_quantidade_movimentos = 5;

    printf("TORRE:\n");

    // Executa os movimentos da torre
    movimentotorre(torre_quantidade_movimentos);

    printf("\n");


    // RAINHA
    int rainha_quantidade_movimentos = 8;

    printf("RAINHA:\n");

    // Executa os movimentos da rainha
    movimentorainha(rainha_quantidade_movimentos);

    printf("\n");


    // CAVALO
    movimentocavalo();

    return 0;
}