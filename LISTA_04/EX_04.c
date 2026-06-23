#include <stdio.h>

int maior(int n1, int n2, int n3)
{
    if(n1 >= n2 && n1 >= n3){
        return n1;
    } else if(n2 >= n1 && n2 >= n3){
        return n2;
    } else {
        return n3;
    }
}

int main()
{
    int n1, n2, n3;
    int res;

    printf("Digite o primeiro numero: ");
    scanf("%i", &n1);

    printf("Digite o segundo numero: ");
    scanf("%i", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%i", &n3);

    res = maior(n1, n2, n3);

    printf("O maior numero eh: %i", res);

    return 0;
}