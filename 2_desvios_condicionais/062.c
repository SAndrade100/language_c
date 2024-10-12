#include <stdio.h>

int main() {
    int M, N;

    printf("Informe o valor de M: ");
    scanf("%d", &M);
    
    printf("Informe o valor de N: ");
    scanf("%d", &N);

    if (M == 0) {
        printf("M nao pode ser zero, pois nao podemos dividir por zero.\n");
    } else if (N % M == 0) {
        printf("%d e multiplo de %d.\n", N, M);
    } else {
        printf("%d nao e multiplo de %d.\n", N, M);
    }

    return 0;
}
