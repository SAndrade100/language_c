#include <stdio.h>

void imprimir_estrelas(int n) {
    if(n <= 0) {
        return;
    }
    imprimir_estrelas(n - 1);
    for(int j = 0; j < n; j++) {
        printf("*");
    }
    printf("\n");
}

void main() {
    int N;
    printf("Informe um numero\n");
    scanf("%d", &N);
    imprimir_estrelas(N);
}