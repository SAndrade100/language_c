#include <stdio.h>
#include <math.h>

#define PI 3.14

int main() {
    float raio, volume;

    printf("Informe o valor do raio da esfera: ");
    scanf("%f", &raio);

    volume = (4.0/3.0) * PI * pow(raio, 3);

    printf("VOLUME: %.2f\n", volume);

    return 0;
}