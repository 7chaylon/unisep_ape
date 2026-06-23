#include <stdio.h>

int main()
{
    int numero1, numero2;
    
    scanf("%i",&numero1);
    scanf("%i",&numero2);
    
    if(numero1 <= numero2){
        for(int i = numero1; i <= numero2; i++){
            printf("%i \n",i);
        }
    }else{
        for(int i = numero1; i >= numero2; i--){
            printf("%i \n",i);
        }
    }
}
