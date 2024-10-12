#include <stdio.h>

int main() {
    int termo_inicial, razao;

    printf("Informe o termo inicial da PA: ");
    scanf("%d", &termo_inicial);

    printf("Informe a razao da PA: ");
    scanf("%d", &razao);

    int termo1 = termo_inicial;
    int termo2 = termo_inicial + razao;
    int termo3 = termo_inicial + 2 * razao;
    int termo4 = termo_inicial + 3 * razao;
    int termo5 = termo_inicial + 4 * razao;

    printf("Os 5 primeiros termos da PA sao:\n");
    printf("%d ", termo1);
    printf("%d ", termo2);
    printf("%d ", termo3);
    printf("%d ", termo4);
    printf("%d ", termo5);
    printf("\n");  

    return 0;
}
