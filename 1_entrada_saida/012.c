#include <stdio.h>

float centimetros(float polegadas) {
    return polegadas * 2.54;
}

int main() {
    float polegadas;
    printf("Informe a quantidade em polegadas: \n");
    scanf("%f", &polegadas);
    printf("CENTIMETROS: %.2f", centimetros(polegadas));
    return 0;
}