#include <stdio.h>

int main()
{
    int numero = 0;
    int contador = 0;
    
    while(numero >= 0){
        scanf("%i",&numero);
        
        if(numero >= 0){
            contador++;
        }
    }
    
    printf("%i \n",contador);
}
