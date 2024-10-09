#include <stdio.h>

int stringTamanho(char palavra[]) {
    int tamanho = 0, i = 0;
    while(palavra[i] != '\0') {
        tamanho++;
        i++;
    }
    return tamanho;
}

int main() {
    char palavra[] = "";
    printf("Informe uma palavra: \n");
    scanf("%s", palavra);
    printf("TAMANHO: %d\n", stringTamanho(palavra));
    return 0;
}