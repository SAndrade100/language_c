#include <stdio.h>

#define M2 300.0

int main() {
    float comprimento, largura;
    printf("Informe o comprimento e a largura do terreno: \n");
    scanf("%f %f", &comprimento, &largura);

    printf("AREA: %.2f\nVALOR: %.2f\n", 
        (comprimento * largura), (comprimento * largura) * M2
    );
    return 0;
}