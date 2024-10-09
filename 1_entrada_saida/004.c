#include <stdio.h>
#include <math.h>

int main() {
    unsigned int numero;
    int dobro, triplo;
    double quadrado, cubo;
    float raiz;
    
    printf("Informe um numero:\n");
    scanf("%u", &numero);
    dobro = numero * 2;
    triplo = numero * 3;
    quadrado = pow(numero, 2);
    cubo = pow(numero, 3);
    raiz = sqrt(numero);

    printf("DOBRO: %d\nTRIPLO: %d\nQUADRADO: %.2f\nCUBO: %.2f\nRAIZ: %.2f\n", 
        dobro, triplo, quadrado, cubo, raiz
    );
    return 0;
}