#include <stdio.h>
#include <math.h>

int main() {
    float sen, cos;
    printf("Informe o seno do angulo: \n");
    scanf("%f", &sen);

    cos = sqrt(1 - (sen * sen));

    int quadrante;
    printf("Informe o quadrante (1, 2, 3 ou 4): ");
    scanf("%d", &quadrante);

    if (quadrante == 2 || quadrante == 3) {
        cos = -cos;
    }


    printf("COSSENO: %.4f", cos);
    return 0;
}