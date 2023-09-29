#include <stdio.h>

int main(){

int A,B;
scanf ("%d",&A);
scanf ("%d",&B);


if(A==B){
    printf("Os valores lidos sao iguais \n");
}
else if (A > B){
    printf("%d eh maior que %d \n" ,A,B);
    if (B==0){
        printf("%d nao eh multiplo de %d \n",A,B );
    }
    else if(A % B == 0)
        {
            printf("%d eh multiplo de %d\n",A,B);
        }
    else {
        printf("%d nao eh multiplo de %d \n", A,B);
    }
}
else{
    printf("%d eh maior que %d \n" ,B,A);
    if (A==0){
        printf("%d eh multiplo de %d \n",B,A );
    }
     else if (B%A == 0)
        {
           printf("%d eh multiplo de %d\n",B,A);
           }

    else {
        printf("%d nao eh multiplo de %d \n", B,A);
    }
}


    return 0; 
}