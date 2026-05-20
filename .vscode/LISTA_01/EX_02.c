#include <stdio.h>

int main() {
    float sal, fin;

    scanf("%f", &sal);

    if (sal > 3000) {
        fin = sal + sal * 0.05;
    } else {
        fin = sal + sal * 0.10;
    }

    printf("%.2f", fin);

    return 0;
}