#include <stdio.h>

int main() {
    int ida;

    scanf("%d", &ida);

    if (ida < 16) {
        printf("Nao pode votar");
    } else if (ida <= 17 || ida > 70) {
        printf("Voto opcional");
    } else {
        printf("Voto obrigatorio");
    }

    return 0;
}