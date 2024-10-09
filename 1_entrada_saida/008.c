#include <stdio.h>

float fahrenheit(float celcius) {
    return (celcius * 1.8) + 32;
}

float kelvin(float celsius) {
    return celsius + 273.15;
}

int main() {
    float celcius ;
    printf("Informe o valor de graus celcius:\n");
    scanf("%f", &celcius);
    printf("CELCIUS: %.2f\nFAHRENHEIT: %.2f\nKELVIN: %.2f\n", celcius, fahrenheit(celcius), kelvin(celcius));
    return 0;
}