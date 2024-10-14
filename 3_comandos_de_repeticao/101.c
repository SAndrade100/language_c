#include <stdio.h>

int main() {
    int n;
    printf("Informe um valor N: \n");
    scanf("%d", &n);

    for(int i = 0, m = 1; i < n; i++, m+=2) {
        printf("%d\n", m);
    }

    return 0;
}