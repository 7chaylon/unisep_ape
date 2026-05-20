#include <stdio.h>

int main() {
    float peso, frete;

    scanf("%f", &peso);

    if (peso <= 5) {
        frete = 10;
    } else if (peso <= 20) {
        frete = 20;
    } else {
        frete = 50;
    }

    printf("%.2f", frete);

    return 0;
}