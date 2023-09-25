#include <stdio.h>
int main(){

int X;

scanf ("%d", &X);

if (X % 4 == 1 || X<=1895 ){
    printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d \n ", X);
   }  
switch(X){
    case 1916:
    printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d \n ", X);
    break;
    case 1940:
    printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d \n ", X);
    break;
    case 1942: 
    printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d \n ", X);
    break;
    case 1944:
    printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d \n ", X);
    break;
    case 1946: 
    printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d \n ", X);
    break;
}

if(X % 4 == 0 && X >= 1896 && X!=1916 && X!=1940 && X!=1942 && X!=1944 && X!=1946){
printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d \n",X);
}
else if(X % 4 == 2 && X >= 1930 && X!=1916 && X!=1940 && X!=1942 && X!=1944 && X!=1946){
    printf("A Copa do Mundo de Futebol ocorreu no ano de %d \n",X);
} 

return 0;
}