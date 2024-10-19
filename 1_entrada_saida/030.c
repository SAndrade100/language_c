#include <stdio.h>
#include <math.h>

float distanciaEuclidiana(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    float x1, y1, x2, y2;
    printf("Informe as coordenadas do primeiro ponto (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Informe as coordenadas do segundo ponto (x2 y2): ");
    scanf("%f %f", &x2, &y2);
    printf("A distância euclidiana entre os pontos (%.2f, %.2f) e (%.2f, %.2f) é %.2f\n", x1, y1, x2, y2, distanciaEuclidiana(x1, y1, x2, y2));
    return 0;
}