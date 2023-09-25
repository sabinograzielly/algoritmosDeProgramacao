#include <stdio.h>
int main(){
    int cadastroInicial, senhaDigitada;

    scanf  ("%d", &cadastroInicial);
    printf("senha cadastrada : %d \n", cadastroInicial);

    while (1){
        scanf ("%d", &senhaDigitada);
        if(cadastroInicial == senhaDigitada){
        printf ("senha valida! \n"); 
        break;
        }
    printf("senha invalida! \n");
        
   
    }




    return 0;
}