#include <stdio.h>
int main(){

int X;
scanf ("%d", &X);

while (X == 1942 || 1946 || 1916 || 1940 || 1944){
    printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d \n ", X);
   
   break;
   }
if(X % 4 == 0 && X >= 1896){
printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d \n",X);
}
else if(X % 4 == 0 && X >= 1930){
    printf("A Copa do Mundo de Futebol ocorreu no ano de %d \n",X);
}   

return 0;
}