#include <stdio.h>

int main()
{
    int numeros[6];
    
    for(int i = 0; i <= 5  ; i++){
        printf("Digite o numero %i: ", i + 1);
        scanf("%i", &numeros[i]);
    };
    
    int menor = numeros[0];
    
    for(int i = 0; i <= 5 ; i++){
        if( numeros[i] < menor){
            menor = numeros[i];
        };
    };
    
    printf("O menor é: %.2i", menor);
    
}