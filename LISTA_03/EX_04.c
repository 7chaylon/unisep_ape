#include <stdio.h>

int main()
{
    int numeros[6];
    int maior = 0;
    
    for(int i = 0; i <= 5  ; i++){
        printf("Digite o numero %i: ", i + 1);
        scanf("%i", &numeros[i]);
    };
    
    for(int i = 0; i <= 5 ; i++){
        if( numeros[i] > maior){
            maior = numeros[i];
        };
    };
    
    printf("O maior é: %.2i", maior);
    
}