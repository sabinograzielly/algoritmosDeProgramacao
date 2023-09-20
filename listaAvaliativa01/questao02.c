#include <stdio.h>

int main(){
  int N,numero;
  int somaAlgarismos=0;
scanf ("%d", &N);

if (N % 2 == 0){
  printf("%d eh par \n", N);
  } 
else {
      printf("%d eh impar\n",N);
  }
numero = N; 
while(N !=0){
  somaAlgarismos += N % 10;
    N /= 10;
}
printf("A soma dos algarismos de %d eh %d.\n", numero, somaAlgarismos);

return 0;
}