#include <stdio.h>

float toMegaByte(int kb) {
    return kb / 1024.0;
}

float toGigaByte(int kb) {
    return toMegaByte(kb) / 1024.0;
}

float toByte(int kb) {
    return kb * 1024.0;
}

float toBits(int kb) {
    return toByte(kb) * 8.0;
}

int main() {
    int kb;
    printf("Informe o valor em KB: \n");
    scanf("%d", &kb);
    printf("BITS: %.2f\nBYTE: %.2f\nMEGABYTE: %.2f\nGIGABYTE: %.2f\n",
            toBits(kb), toByte(kb), toMegaByte(kb), toGigaByte(kb)
    );
    return 0;
}