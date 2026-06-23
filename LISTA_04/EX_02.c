#include <stdio.h>

int soma(int n1)
{
    if(n1 % 2 == 0){
        n1 = 1;
    }else{
        n1 = 0;
    };
    
    
    return n1;
}

int main()
{
    int n1 = 0;
    int resultado = 0;
    
    printf("Digite um numero: ");
    scanf("%i", &n1);
    
    resultado = soma(n1);
    
    printf("%i", resultado);
}