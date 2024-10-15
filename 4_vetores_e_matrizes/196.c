#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 10

void inicializar_tabuleiro(char tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = '.';
        }
    }
}

void imprimir_tabuleiro(char tabuleiro[TAMANHO][TAMANHO], int jogador_1_x, int jogador_1_y,
    int jogador_2_x, int jogador_2_y
) {
    for(int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            if(i == jogador_1_x && j == jogador_1_y) {
                printf("1 ");
            } else if(i == jogador_2_x && j == jogador_2_y) {
                printf("2 ");
            } else {
                printf("%c ", tabuleiro[i][j]);
            }
        }
        printf("\n");
    }
}

void gerar_tesouro(int *tesouro_x, int *tesouro_y) {
    *tesouro_x = rand() % TAMANHO;
    *tesouro_y = rand() % TAMANHO;
}

void mover_jogador(int *jogador_x, int *jogador_y, char direcao) {
    if(direcao == 'w' && *jogador_x > 0) {
        (*jogador_x)--;
    } else if(direcao == 's' && *jogador_x < TAMANHO - 1) {
        (*jogador_x)++;
    } else if(direcao == 'a' && *jogador_y > 0) {
        (*jogador_y)--;
    } else if(direcao == 'd' && *jogador_y < TAMANHO - 1) {
        (*jogador_y)++;
    }
}

int main() {
    char tabuleiro[TAMANHO][TAMANHO];
    int jogador_1_x = 0, jogador_1_y = 0;
    int jogador_2_x = TAMANHO - 1, jogador_2_y = TAMANHO - 1;
    int tesouro_x, tesouro_y;
    char direcao;
    int turno = 1;

    srand(time(NULL));
    inicializar_tabuleiro(tabuleiro);
    gerar_tesouro(&tesouro_x, &tesouro_y);

    printf("Bem-vindo ao jogo de Caça ao Tesouro!\n");
    printf("Jogador 1 começa na posicao (1,1) e Jogador 2 começa na posicao (10,10).\n");
    printf("O tesouro esta escondido em uma posicao aleatoria do tabuleiro.\n");

    while (1) {
        imprimir_tabuleiro(tabuleiro, jogador_1_x, jogador_1_y, jogador_2_x, jogador_2_y);

        if(jogador_1_x == tesouro_x && jogador_1_y == tesouro_y) {
            printf("Parabens, Jogador 1 encontrou o tesouro!\n");
            break;
        } else if(jogador_2_x == tesouro_x && jogador_2_y == tesouro_y) {
            printf("Parabens, Jogador 2 encontrou o tesouro!\n");
            break;
        }

        if(turno == 1) {
            printf("Jogador 1, escolha uma direcao (w: cima, s: baixo, a: esquerda, d: direita): ");
            scanf(" %c", &direcao);
            mover_jogador(&jogador_1_x, &jogador_1_y, direcao);
            turno = 2;
        } else {
            printf("Jogador 2, escolha uma direcao (w: cima, s: baixo, a: esquerda, d: direita): ");
            scanf(" %c", &direcao);
            mover_jogador(&jogador_2_x, &jogador_2_y, direcao);
            turno = 1;
        }

    }

    return 0;
}