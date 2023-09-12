#include <stdio.h>
 
int main() {
int valorA, valorB, valorC, valorD, diferenca;

scanf("%d", &valorA);
scanf("%d", &valorB);
scanf("%d", &valorC);
scanf("%d", &valorD);

diferenca = valorA * valorB - valorC * valorD;

 printf("DIFERENCA = %d\n", diferenca);
    return 0;
}