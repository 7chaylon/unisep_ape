#include <stdio.h>

int main()
{
    int numeros[6];
    int aux;
    
    for(int i = 0; i < 6  ; i++){
        printf("Digite o numero %i: ", i + 1);
        scanf("%i", &numeros[i]);
    };
    
    for(int i = 0; i < 6 ; i++){
       for(int j = i + 1; j < 6; j++){
            if(numeros[i] < numeros[j]){
                aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            };
       };
    };
    
    printf("O segundo maior valor eh: %i", numeros[1]);
    
}