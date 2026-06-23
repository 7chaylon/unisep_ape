#include <stdio.h>

int main()
{
    float numeros[5];
    
    for(int i = 0; i <= 4  ; i++){
        printf("Digite o numero %i: ", i + 1);
        scanf("%f", &numeros[i]);
    };
    
    for(int i = 0; i <= 4 ; i++){
        printf("%.2f ", numeros[i]);
    }
    
}