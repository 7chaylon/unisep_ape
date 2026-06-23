#include <stdio.h>

int mdc(int n1, int n2)
{
    int resto;

    if(n1 < 0){
        n1 = n1 * -1;
    }

    if(n2 < 0){
        n2 = n2 * -1;
    }

    while(n2 != 0){
        resto = n1 % n2;
        n1 = n2;
        n2 = resto;
    }

    return n1;
}

int main()
{
    int n1;
    int n2;
    int resultado;

    printf("Digite o primeiro numero: ");
    scanf("%i", &n1);

    printf("Digite o segundo numero: ");
    scanf("%i", &n2);

    resultado = mdc(n1, n2);

    printf("O MDC eh: %i", resultado);

    return 0;
}
