#include <stdio.h>

int main() {
    float comprimento, largura, litros, altura_necessaria;

    printf("Informe o comprimento da cisterna (em metros): ");
    scanf("%f", &comprimento);
    printf("Informe a largura da cisterna (em metros): ");
    scanf("%f", &largura);

    printf("Informe a quantidade de litros que deseja armazenar: ");
    scanf("%f", &litros);

    float metros_cubicos = litros / 1000;

    altura_necessaria = metros_cubicos / (comprimento * largura);

    printf("Você deve encher a cisterna até %.2f metros para armazenar %.2f litros.\n", altura_necessaria, litros);

    return 0;
}