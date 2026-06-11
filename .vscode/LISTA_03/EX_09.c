#include <stdio.h>

int main()
{
    int numeros[10];
    
    for(int i = 0; i < 10  ; i++){
        printf("Digite o numero %i: ", i + 1);
        scanf("%i", &numeros[i]);
    };
    
    for(int i = 0; i < 10 ; i++){
        if(numeros[i] < 0){
            numeros[i] = 0;
        };
        
        printf("%i ", numeros[i]);
    }
    
}