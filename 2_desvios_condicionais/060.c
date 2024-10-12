#include <stdio.h>

int main() {
    int quantidadePessoas;
    float kgCarne;

    printf("Informe o numero de pessoas que vao participar do churrasco: ");
    scanf("%d", &quantidadePessoas);

    if(quantidadePessoas <= 0) {
        printf("Número de pessoas inválido. Informe um número positivo.\n");
    } else {
        kgCarne = (quantidadePessoas * 250) / 1000.0;
        printf("Para %d pessoas, voce deve comprar %.2f kg de carne.\n", quantidadePessoas, kgCarne);
    }
    return 0;
}