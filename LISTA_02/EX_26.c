#include <stdio.h>

int main()
{
    int numero;
    
    scanf("%i",&numero);
    
    for(int i = 1; i <= numero; i++){
        for(int j = 1; j <= numero; j++){
            printf("*");
        }
        printf("\n");
    }
}
