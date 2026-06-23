#include <stdio.h>

long long fatorial(int numero)
{
    long long resultado = 1;
    int i;

    for(i = 1; i <= numero; i++){
        resultado = resultado * i;
    }

    return resultado;
}

int main()
{
    int numero;
    long long resultado;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    if(numero < 0){
        printf("Nao existe fatorial de numero negativo.");
    } else {
        resultado = fatorial(numero);
        printf("O fatorial eh: %lld", resultado);
    }

    return 0;
}
