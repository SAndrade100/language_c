#include <stdio.h>

int main() {
    float valor_compra, valor_vista, valor_parcela_3x, valor_total_10x, valor_parcela_10x;

    printf("Informe o valor da compra: ");
    scanf("%f", &valor_compra);

    valor_vista = valor_compra * 0.90;

    valor_parcela_3x = valor_compra / 3;

    valor_total_10x = valor_compra * 1.20;

    valor_parcela_10x = valor_total_10x / 10;

    printf("Valor da compra à vista com 10%% de desconto: R$ %.2f\n", valor_vista);
    printf("Valor de cada parcela em 3x sem juros: R$ %.2f\n", valor_parcela_3x);
    printf("Valor de cada parcela em 10x com 20%% de juros: R$ %.2f\n", valor_parcela_10x);

    return 0;
}