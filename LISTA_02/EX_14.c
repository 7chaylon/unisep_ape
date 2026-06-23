#include <stdio.h>

int main()
{
    int numero;
    
    scanf("%i",&numero);
    
    while(numero >= 0){
        printf("%i \n",numero);
        numero--;
    }
}
