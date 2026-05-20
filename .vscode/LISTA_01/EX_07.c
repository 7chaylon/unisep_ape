#include <stdio.h>

int main() {
    float temp;

    scanf("%f", &temp);

    if (temp < 15) {
        printf("Frio");
    } else if (temp <= 25) {
        printf("Agradavel");
    } else {
        printf("Quente");
    }

    return 0;
}