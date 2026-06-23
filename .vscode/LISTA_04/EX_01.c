#include <stdio.h>

int soma(int n1, int n2)
{
    return n1 + n2;
}

int main()
{
    int n1 = 0;
    int n2 = 0;
    int resultado = 0;
    
    printf("Digite um numero: ");
    scanf("%i", &n1);
    
    printf("Digite outro numero: ");
    scanf("%i", &n2);
    
    resultado = soma(n1, n2);
    
    printf("A soma eh: %i", resultado);
}