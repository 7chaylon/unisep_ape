#include <stdio.h>
#include <string.h>

void inverter(char texto[])
{
    int inicio = 0;
    int fim = strlen(texto) - 1;
    char auxiliar;

    while(inicio < fim){
        auxiliar = texto[inicio];
        texto[inicio] = texto[fim];
        texto[fim] = auxiliar;

        inicio++;
        fim--;
    }
}

int main()
{
    char texto[100];

    printf("Digite uma palavra ou frase: ");
    fgets(texto, 100, stdin);

    texto[strcspn(texto, "\n")] = '\0';

    inverter(texto);

    printf("Texto invertido: %s", texto);

    return 0;
}
