#include <stdio.h>

int main() {
    int num1, num2, num3;
    float peso1, peso2,peso3;
    printf("Informe o numero e o peso do primeiro numero:\n");
    scanf("%d %f", &num1, &peso1);
    printf("Informe o numero e o peso do segundo numero:\n");
    scanf("%d %f", &num2, &peso2);
    printf("Informe o numero e o peso do terceiro numero:\n");
    scanf("%d %f", &num3, &peso3);

    float media = (num1 * peso1) + (num2 * peso2) + (num3 * peso3);
    printf("O resultado da media e: %.2f", media);

    return 0;
}