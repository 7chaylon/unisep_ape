#include <stdio.h>

int main()
{
    int idade = 0;
    int soma = 0;
    int contador = 0;
    float media = 0;
    
    do{
        scanf("%i",&idade);
        
        if(idade != 0){
            soma = soma + idade;
            contador++;
        }
    }while(idade != 0);
    
    if(contador > 0){
        media = soma / (float)contador;
    }
    
    printf("%.2f \n",media);
}
