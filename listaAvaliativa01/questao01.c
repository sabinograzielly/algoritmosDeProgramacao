#include <stdio.h>
int main(){

int X, naoTeve; 

scanf ("%d", &X);

for (naoTeve = 1940;naoTeve<=1946 ; naoTeve = naoTeve + 2 || X % 4 == 1 && X<=1895 || X == 1916){
    printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d \n ", X);
   if(X % 4 == 0 && X >= 1896){
printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d \n",X);
}
else if(X % 4 == 2 && X >= 1930){
    printf("A Copa do Mundo de Futebol ocorreu no ano de %d \n",X);
} 
   break;
   }  

return 0;
}