#include <stdio.h>

int main() {
    float metros, valorPorMetro;
    printf("Informe a quantidade de metros e o valor por metro quadrado: \n");
    scanf("%f %f", &metros, &valorPorMetro);

    if (metros < 0 || valorPorMetro < 0) {
        printf("Erro: Tanto a quantidade de metros quanto o valor por metro quadrado devem ser positivos.\n");
    } else {
        printf("VALOR TOTAL: R$ %.2f\n", metros * valorPorMetro);
    }

    return 0;
}