#include <stdio.h>

int quadrado(int n1)
{
    return n1 * n1;
}

int main()
{
    int n1 = 0;
    int resultado = 0;
    
    printf("Digite um numero: ");
    scanf("%i", &n1);
    
    resultado = quadrado(n1);
    
    printf("%i", resultado);
}