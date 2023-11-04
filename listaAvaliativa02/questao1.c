#include <stdio.h>

int main() {
    int valores[10];
    int tamanhoInicial = 10;

    for(int i=0; i<tamanhoInicial;i++)
        scanf ("%d",&valores[i]);

    for (int i = 0; i < tamanhoInicial; i++)
        printf("%d%c", valores[i], i < tamanhoInicial - 1 ? ' ' : '\n');

    while (tamanhoInicial > 1) {
        for (int i = 0; i < tamanhoInicial - 1; i++) {
            printf("%d%c", valores[i] + valores[i + 1], i < tamanhoInicial - 2 ? ' ' : '\n');// perguntar se pode usar o ? bibi disse que é um divisor de aguas, antes dele verdadeiro e depois falso.
            valores[i] += valores[i + 1];
        }
        tamanhoInicial--;
    }

    return 0;
}