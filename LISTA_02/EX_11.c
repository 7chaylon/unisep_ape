#include <stdio.h>

int main()
{
    int numero;
    int fatorial = 1;
    
    scanf("%i",&numero);
    
    for(int i = 1; i <= numero; i++){
        fatorial = fatorial * i;
    }
    
    printf("%i \n",fatorial);
}
