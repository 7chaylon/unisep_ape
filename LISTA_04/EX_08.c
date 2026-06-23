#include <stdio.h>

float media(int vetor[], int tamanho)
{
    int i;
    int soma = 0;

    for(i = 0; i < tamanho; i++){
        soma = soma + vetor[i];
    }

    return (float)soma / tamanho;
}

int main()
{
    int vetor[100];
    int tamanho;
    int i;
    float resultado;

    printf("Digite o tamanho do vetor: ");
    scanf("%i", &tamanho);

    if(tamanho <= 0 || tamanho > 100){
        printf("Tamanho invalido.");
        return 0;
    }

    for(i = 0; i < tamanho; i++){
        printf("Digite o elemento %i: ", i + 1);
        scanf("%i", &vetor[i]);
    }

    resultado = media(vetor, tamanho);

    printf("A media eh: %.2f", resultado);

    return 0;
}
