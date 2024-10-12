#include <stdio.h>

int main() {
    float precoProducao, margemLucro;

    printf("Informe o preco de producao do produto: \n");
    scanf("%f", &precoProducao);

    printf("Informe a margem de lucro desejada (em porcentagem): \n");
    scanf("%f", &margemLucro);

    printf("VALOR VENDA: %.2f\n", precoProducao + (precoProducao * (margemLucro / 100)));
    return 0;
}