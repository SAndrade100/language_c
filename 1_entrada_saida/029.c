#include <stdio.h>

int main() {
    int total_questoes, questoes_acertadas;
    float percentual_acertos, percentual_erros;

    printf("Informe o número total de questões da prova: ");
    scanf("%d", &total_questoes);

    printf("Informe o número de questões que o candidato acertou: ");
    scanf("%d", &questoes_acertadas);

    percentual_acertos = (float)questoes_acertadas / total_questoes * 100;

    percentual_erros = 100 - percentual_acertos;

    printf("Percentual de acertos: %.2f%%\n", percentual_acertos);
    printf("Percentual de erros: %.2f%%\n", percentual_erros);

    return 0;
}