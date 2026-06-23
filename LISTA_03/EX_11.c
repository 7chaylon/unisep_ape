#include <stdio.h>

int main()
{
    int numeros[10];
    int aux;
    
    for(int i = 0; i < 10  ; i++){
        printf("Digite o numero %i: ", i + 1);
        scanf("%i", &numeros[i]);
    };
    
    for(int i = 0; i < 10 ; i++){
       for(int j = i + 1; j < 10; j++){
            if(numeros[i] < numeros[j]){
                aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            };
       };
    };
    
    for(int i = 0; i < 10; i++){
        printf("%i ", numeros[i]);
    };
    
}