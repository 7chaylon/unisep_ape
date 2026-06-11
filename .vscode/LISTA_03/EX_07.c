#include <stdio.h>

int main()
{
    int numeros[10];
    int media = 0;
    int tam = sizeof(numeros) / sizeof(numeros[0]);
    
    for(int i = 0; i <= 9  ; i++){
        printf("Digite o numero %i: ", i + 1);
        scanf("%i", &numeros[i]);
    };
    
    for(int i = 0; i <= 9 ; i++){
        media = media + numeros[i];
    };
    
    media = media / tam;
    
    printf("A média é : %i", media);
    
}