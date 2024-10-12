#include <stdio.h>

int main() {
    int numero;
    printf("Informe um numero: \n");
    scanf("%d", &numero);

    if(numero % 2 == 0) {
        printf("%d e PAR\n", numero);
    } else {
        printf("%d e IMPAR\n", numero);
    }
    return 0;
}