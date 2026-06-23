#include <stdio.h>

int main()
{
    int opcao;
    
    do{
        printf("1: Dizer Ola\n");
        printf("2: Dizer Tudo bem?\n");
        printf("3: Sair\n");
        scanf("%i",&opcao);
        
        if(opcao == 1){
            printf("Ola\n");
        }else if(opcao == 2){
            printf("Tudo bem?\n");
        }
    }while(opcao != 3);
}
