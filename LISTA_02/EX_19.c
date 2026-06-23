#include <stdio.h>

int main()
{
    int numero;
    int maior = 0;
    int contador = 0;
    
    do{
        scanf("%i",&numero);
        
        if(numero != 999){
            if(contador == 0 || numero > maior){
                maior = numero;
            }
            contador++;
        }
    }while(numero != 999);
    
    printf("%i \n",maior);
}
