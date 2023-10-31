#include <stdio.h>
 
int main() {
int numero,X[10];
 for (int posicao = 0; posicao<10; posicao++){
     scanf("%d", &numero);
     if (numero>0){
         X[posicao]= numero;
     } else {
         X[posicao]=1;
     }
 }
 for(int posicao=0; posicao<10;posicao++){
     printf("X[%d] = %d\n", posicao, X[posicao]);
 }
 
 
    return 0;
}
