#include <stdio.h>

float velocidadeMedia(int distancia, int tempo) {
    return distancia / tempo;
}

int main() {
    int distancia, tempo;
    printf("Informe a distancia (metros) e o tempo (minutos): \n");
    scanf("%d %d", &distancia, &tempo);
    printf("VELOCIDADE MEDIA: %.2f m/s", velocidadeMedia(distancia, tempo));
    return 0;
}