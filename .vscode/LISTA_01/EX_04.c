#include <stdio.h>

int main() {
    float nota;

    scanf("%f", &nota);

    if (nota >= 9) {
        printf("A");
    } else if (nota >= 7) {
        printf("B");
    } else if (nota >= 5) {
        printf("C");
    } else {
        printf("D");
    }

    return 0;
}