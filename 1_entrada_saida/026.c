#include <stdio.h>

int main() {
    float peso[8], altura[8];
    float peso_medio, altura_media;
    
    for(int i = 0; i < 8; i++) {
        printf("Informe o peso e a altura da pessoa %d\n", i + 1);
        scanf("%f %f", &peso[i], &altura[i]);
    }
    printf("Assumindo que as duplas foram passadas em ordem sequencial, temos:\n");
    for(int i = 0; i < 8; i += 2) {
        peso_medio = (peso[i] + peso[i + 1]) / 2;
        altura_media = (altura[i] + altura[i + 1]) / 2;
        printf("Dupla %d: peso = %.2f, altura = %.2f\n", i / 2 + 1, peso_medio, altura_media);
    }
    return 0;
}