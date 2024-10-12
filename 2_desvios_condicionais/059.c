#include <stdio.h>

int main() {
    int num1, num2;
    printf("Informe dois numeros: \n");
    scanf("%d %d", &num1, &num2);

    if(num1 > num2) {
        printf("%d e maior que %d.\n", num1, num2);
    } else if(num1 == num2) {
        printf("%d e igual a %d.\n", num1, num2);
    } else {
        printf("%d e menor que %d.\n", num1, num2);
    }
    
    return 0;
}