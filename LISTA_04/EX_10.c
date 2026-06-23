#include <stdio.h>
#include <string.h>

int contarVogais(char texto[])
{
    int i;
    int quantidade = 0;

    for(i = 0; texto[i] != '\0'; i++){
        if(texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u' ||
           texto[i] == 'A' || texto[i] == 'E' || texto[i] == 'I' || texto[i] == 'O' || texto[i] == 'U'){
            quantidade++;
        }
    }

    return quantidade;
}

int main()
{
    char texto[100];
    int resultado;

    printf("Digite uma palavra ou frase: ");
    fgets(texto, 100, stdin);

    texto[strcspn(texto, "\n")] = '\0';

    resultado = contarVogais(texto);

    printf("Quantidade de vogais: %i", resultado);

    return 0;
}
