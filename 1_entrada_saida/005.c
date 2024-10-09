#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

float area(int num) {
    return PI * (pow(num, 2));
}

float comprimento(int num) {
    return 2 * PI * num;
}

int main() {
    int num;
    printf("Informe o raio da circunferencia:\n");
    scanf("%d", &num);
    printf("AREA: %.2f\nCOMPRIMENTO: %.2f\n", area(num), comprimento(num));
    return 0;
}