#include <stdio.h>

int primo(int numero)
{
    int i;

    if(numero <= 1){
        return 0;
    }

    for(i = 2; i * i <= numero; i++){
        if(numero % i == 0){
            return 0;
        }
    }

    return 1;
}

int main()
{
    int numero;
    int resultado;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    resultado = primo(numero);

    if(resultado == 1){
        printf("O numero eh primo.");
    } else {
        printf("O numero nao eh primo.");
    }

    return 0;
}
