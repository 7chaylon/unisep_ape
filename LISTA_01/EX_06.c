#include <stdio.h>

int main() {
    float kwh, val;

    scanf("%f", &kwh);

    if (kwh <= 100) {
        val = kwh * 0.50;
    } else if (kwh <= 200) {
        val = kwh * 0.75;
    } else {
        val = kwh * 1.00;
    }

    printf("%.2f", val);

    return 0;
}