#include <stdio.h>

int main(){
int DIAS, A, M, D;

scanf("%d",&DIAS);

A = DIAS/365;
M = (DIAS%365)/30;
D = (DIAS%365)%30;

printf("%d ano(s)\n %d mes(es)\n %d dia(s)",A, M, D);

return 0;
}

