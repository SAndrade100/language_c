#include <stdio.h>
#include <string.h>

char kesimaLetra(char palavra[], int k) {
    if(k>=0 && k < strlen(palavra)) return palavra[k];
    else return '\0';
}  

int main() {
    char palavra[30] ="";
    int k;

    printf("indique uma palavra e um numero: \n");
    scanf("%s %d", palavra, &k);

    char letra = kesimaLetra(palavra, k);
    if(letra != '\0') {
        printf("KESIMA LETRA: %c\n", letra);
    } else {
        printf("Erro: o índice está fora do intervalo da palavra.\n");
    }
    return 0;
}