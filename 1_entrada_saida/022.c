#include <stdio.h>

int main() {
    int a, b, maiorMultiplo;

    printf("Informe o valor de a: ");
    scanf("%d", &a);

    printf("Informe o valor de b: ");
    scanf("%d", &b);

    maiorMultiplo = (b / a) * a;

    printf("O maior multiplo de %d menor ou igual a %d e: %d\n", a, b, maiorMultiplo);

    return 0;
}