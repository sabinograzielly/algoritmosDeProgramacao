#include <stdio.h>
#include <math.h>

double valorFinal(int meses, double aporte, double taxaRetorno) {
    double resultado = aporte * (1 + taxaRetorno) * (((pow(1 + taxaRetorno, meses) - 1) / taxaRetorno));
    return (resultado < 0) ? 0 : resultado;
}

int main() {
    int meses;
    double aporte, taxaRetorno;

    scanf("%d", &meses);
    scanf("%lf", &aporte);
    scanf("%lf", &taxaRetorno);

    for (int i = 1; i <= meses; i++) {
        double resultado = valorFinal(i, aporte, taxaRetorno);
        printf("Montante ao fim do mes %d: R$ %.2f\n", i, resultado);
    }

    return 0;
}

