#include <stdio.h>

int main()
{
    int numero;
    
    scanf("%i",&numero);
    
    for(int i = 1; i <= 10; i++){
        printf("%i x %i = %i\n",numero,i,numero*i);
    }
}
