#include <stdio.h>

float dolar(float real, float cotacao) {
    return real * cotacao;
}

int main() {
    float real, cotacao;
    printf("Informe o valor em Real e a cotacao atual:\n");
    scanf("%f %f", &real, &cotacao);
    printf("DOLAR: %.2f", dolar(real, cotacao));
    return 0;
}