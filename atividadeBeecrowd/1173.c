#include <stdio.h>

int main(){
    int vetor[10], numero;

    scanf("%d", &numero);

    vetor[0] = numero;

    // inicializa os valores do vetor
    for(int posicao = 1;posicao < 10;posicao++){
        vetor[posicao] = vetor[posicao - 1]*2;
    }

    // imprime o valor de cada posicao
    for(int posicao = 0;posicao < 10;posicao++){
        printf("N[%d] = %d\n", posicao, vetor[posicao]);
    }

    return 0;
}
