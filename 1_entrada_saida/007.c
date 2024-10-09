#include <stdio.h>

float areaTriangulo(int base, int altura) {
    return base * altura;
}

int main() {
    int base, altura;
    printf("Informe a base e a altura do triangulo: \n");
    scanf("%d %d", &base, &altura);
    printf("AREA: %.2f\n", areaTriangulo(base, altura));
    return 0;
}