#include <stdio.h>
#include <math.h>

float hipotenusa(int catetoA, int catetoB) {
    return sqrt(pow(catetoA, 2) + pow(catetoB, 2));
}

int main() {
    int catetoA, catetoB;
    printf("Informe o cateto A e o cateto B: \n");
    scanf("%d %d", &catetoA, &catetoB);
    printf("HIPOTENUSA: %.2f", hipotenusa(catetoA, catetoB));
    return 0;
}