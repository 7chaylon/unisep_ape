#include <stdio.h>

int main()
{
    int numeros[8];
    int soma = 0;
    
    for(int i = 0; i <= 7  ; i++){
        printf("Digite o numero %i: ", i + 1);
        scanf("%i", &numeros[i]);
        soma = soma + numeros[i];
    };
    
    printf("%.2i", soma);
}