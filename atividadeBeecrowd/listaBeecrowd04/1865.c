#include <stdio.h>
#include <string.h>


int main(){
   
    int numEntrada,forca;
    char nome[50];
    scanf("%d",&numEntrada);
    
    for (int repeticoes = 0; repeticoes < numEntrada; repeticoes++)
    {
        scanf("%s",nome); //posso usar scanf porque são nomes sem espaço
        scanf("%d",&forca);
        if (strcmp(nome,"Thor") == 0)
        {
            printf("Y\n");
        }else{
            printf("N\n");
        }
        
    }
    


    return 0;
}