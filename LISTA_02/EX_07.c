#include <stdio.h>

int main()
{
    int i = 1;
    int soma = 0;
    while(i <= 10){
        soma = soma + i;
        i++;
    }
    printf("%i \n",soma);
}