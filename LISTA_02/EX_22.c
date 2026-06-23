#include <stdio.h>

int main()
{
    int numero;
    
    do{
        scanf("%i",&numero);
    }while(numero <= 0);
    
    printf("%i \n",numero);
}
