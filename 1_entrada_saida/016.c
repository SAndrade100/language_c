#include <stdio.h>

char ascii(char letra) {
    return letra - 32;
}

int main() {
    char letra;
    printf("Informe uma letra minuscula: \n");
    scanf("%c", &letra);

    if(letra >= 'a' && letra <= 'z') {
        printf("MAIUSCULA: %c\n", ascii(letra));
    } else printf("Erro: Voce deve digitar uma letra maiuscula.\n");

    return 0;
}