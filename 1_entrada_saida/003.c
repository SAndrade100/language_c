#include <stdio.h>

int main() {
    int lado, area, perimetro;
    printf("Informe o lado desse quadrado:\n");
    scanf("%d", &lado);
    area = lado * lado;
    perimetro = lado * 4;
    printf("AREA: %d\nPERIMETRO: %d\n", area, perimetro);
    return 0;
}