#include <stdio.h>

int main()
{
    int numeros[10];
    float media = 0;
    int tam = sizeof(numeros) / sizeof(numeros[0]);
    
    for(int i = 0; i < tam  ; i++){
        printf("Digite o numero %i: ", i + 1);
        scanf("%i", &numeros[i]);
    };
    
    for(int i = 0; i < tam ; i++){
        media = media + numeros[i];
    };
    
    media = media / tam;
    
    for(int i = 0; i < tam ; i++){
        if(numeros[i] > media){
            printf("%i \n", numeros[i]);
        }
    };
    
}