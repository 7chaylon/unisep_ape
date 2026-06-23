#include <stdio.h>

int main()
{
    int numero;
    int soma = 0;
    
    do{
        scanf("%i",&numero);
        soma = soma + numero;
    }while(numero != 0);
    
    printf("%i \n",soma);
}
