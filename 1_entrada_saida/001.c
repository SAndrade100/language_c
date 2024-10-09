#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Informe 3 numeros: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("A media e: %.2f\n", (num1 + num2 + num3) / 3.0);
    return 0;
}
