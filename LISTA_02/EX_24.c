#include <stdio.h>

int main()
{
    int numero;
    int primo = 1;
    
    scanf("%i",&numero);
    
    if(numero <= 1){
        primo = 0;
    }
    
    for(int i = 2; i < numero; i++){
        if(numero%i==0){
            primo = 0;
        }
    }
    
    if(primo == 1){
        printf("Primo\n");
    }else{
        printf("Nao primo\n");
    }
}
