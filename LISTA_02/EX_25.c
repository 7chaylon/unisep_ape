#include <stdio.h>

int main()
{
    int valor;
    int notas;
    
    scanf("%i",&valor);
    
    notas = valor / 100;
    printf("100: %i\n",notas);
    valor = valor % 100;
    
    notas = valor / 50;
    printf("50: %i\n",notas);
    valor = valor % 50;
    
    notas = valor / 20;
    printf("20: %i\n",notas);
    valor = valor % 20;
    
    notas = valor / 10;
    printf("10: %i\n",notas);
    valor = valor % 10;
    
    notas = valor / 5;
    printf("5: %i\n",notas);
    valor = valor % 5;
    
    notas = valor;
    printf("1: %i\n",notas);
}
