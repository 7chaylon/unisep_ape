#include <stdio.h>

int main() {
    int vel;

    scanf("%d", &vel);

    if (vel <= 60) {
        printf("Sem multa");
    } else if (vel <= 80) {
        printf("Multa leve");
    } else if (vel <= 100) {
        printf("Multa grave");
    } else {
        printf("Multa gravissima");
    }

    return 0;
}