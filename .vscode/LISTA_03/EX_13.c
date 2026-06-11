#include <stdio.h>

int main()
{
    int numeros[10];
    int numRep;
    int maiorCont = 0;
    
    for(int i = 0; i < 10; i++){
        printf("Digite o numero %i: ", i + 1);
        scanf("%i", &numeros[i]);
    }
    
    for(int i = 0; i < 10; i++){
        int cont = 0;
        
        for(int j = 0; j < 10; j++){
            if(numeros[i] == numeros[j]){
                cont++;
            }
        }
        
        if(cont > maiorCont){
            maiorCont = cont;
            numRep = numeros[i];
        }
    }
    
    printf("O numero que mais se repete eh: %i\n", numRep);
    printf("Ele aparece %i vezes", maiorCont);
    
    return 0;
}