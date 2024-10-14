#include <stdio.h>
#include <math.h>

#define PRECISAO 0.0001

double f_from_x(double x, int N, int M) {
    return pow(x, N) - M;
}

double f_derivada(double x, int N) {
    return N * pow(x, N - 1);
}

double raiz_enesima(int N, int M) {
    double xk = 1.0;
    double xk_1;

    do {
        xk_1 = xk;
        xk = xk_1 - (f_from_x(xk_1, N, M) / f_derivada(xk_1, N));
    } while(fabs(xk - xk_1) > PRECISAO);

    return xk;
}

int main() {
    int N, M;

    printf("Digite o valor de N (grau da raiz): ");
    scanf("%d", &N);
    
    printf("Digite o valor de M: ");
    scanf("%d", &M);

    if (N <= 0 || M <= 0) {
        printf("N e M devem ser numeros inteiros positivos.\n");
        return 1;
    }

    double raiz = raiz_enesima(N, M);

    printf("A raiz %d-esima de %d e aproximadamente: %.5f\n", N, M, raiz);

    return 0;
}