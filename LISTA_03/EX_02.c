#include <stdio.h>

int main()
{
    int numeros[10];
    
    for(int i = 0; i <= 9  ; i++){
        printf("Digite o numero %i: ", i + 1);
        scanf("%i", &numeros[i]);
    };
    
    for(int i = 0; i <= 9 ; i++){
        if(numeros[i] % 2 == 0){
            printf("%.2i ", numeros[i]);
        } else;
        
    }
    
}