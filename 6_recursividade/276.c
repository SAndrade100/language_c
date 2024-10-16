#include <stdio.h>

void imprimir_estrelas_desc(int n) {
    if(n <= 0) {
        return;
    }
    for(int j = 0; j < n; j++) {
        printf("*");
    }
    printf("\n");
    imprimir_estrelas_desc(n - 1);
}

void main() {
    int N;
    printf("Informe um numero\n");
    scanf("%d", &N);
    imprimir_estrelas_desc(N);
}