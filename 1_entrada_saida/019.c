#include <stdio.h>

int main() {
    float angulo1, angulo2, angulo3;

    printf("Informe o valor do primeiro angulo: ");
    scanf("%f", &angulo1);

    printf("Informe o valor do segundo angulo: ");
    scanf("%f", &angulo2);

    angulo3 = 180 - (angulo1 + angulo2);
    printf("O valor do terceiro angulo e: %.2f graus\n", angulo3);
    
    return 0;
}