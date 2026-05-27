#include <stdio.h>

int main()
{
    int senha;
    int senhaCorreta = 1234;
    
    do{
        scanf("%i",&senha);
    }while(senha != senhaCorreta);
    
    printf("Senha correta\n");
}
