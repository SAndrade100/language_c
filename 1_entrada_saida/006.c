#include <stdio.h>

int main() {
    int num;
    printf("Informe um numero:\n");
    scanf("%d", &num);
    printf("ANTECESSOR: %d\nSUCESSOR: %d\n", (num - 1), (num + 1));
    return 0;
}