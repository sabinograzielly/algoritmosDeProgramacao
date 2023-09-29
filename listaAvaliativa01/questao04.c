#include <stdio.h>
#include <string.h>

int main(){

char nivel;
float salario, aumento;

scanf("%c", &nivel);
scanf ("%f", &salario); 

switch(nivel){
    case 'a':
    aumento= salario*0.05;
    printf( "R$ %.2f\n ", salario + aumento);
    break;
    case 'b':
    aumento= salario*0.07;
    printf( "R$ %.2f\n ", salario + aumento);
    break;
    case 'c':
    aumento= salario*0.08;
    printf( "R$ %.2f\n ", salario + aumento);
    break;
}

    return 0;
}