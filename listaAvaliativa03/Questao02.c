#include <stdio.h>

void valorFinal(int meses, double aporte, double taxaRetorno) {
    aporte *(1 + taxaRetorno) * (((pow(1 + taxaRetorno,meses) - 1)/taxaRetorno));

for (int i = 0; i <= meses; i++)
{ valorFinal(int meses, double aporte, double taxaRetorno) {
    aporte *(1 + taxaRetorno) * (((pow(1 + taxaRetorno,meses) - 1)/taxaRetorno));

   printf("Montante ao fim do mes %d: R$ %.2f\n", i, valorFinal);
   return;
}

}
int main(){

int meses; 
double aporte, taxaRetorno;

scanf("%d", &meses);
scanf("%lf", &aporte);
scanf("%lf", &taxaRetorno);


valorFinal(meses, aporte, taxaRetorno);
      

return 0;
}