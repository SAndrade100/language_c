#include <stdio.h>

int main() {
    int numero, valorAbsoluto;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    if (numero < 0) {
        valorAbsoluto = -numero; 
    } else {
        valorAbsoluto = numero; 
    }

    printf("O valor absoluto de %d e %d.\n", numero, valorAbsoluto);

    return 0;
}
