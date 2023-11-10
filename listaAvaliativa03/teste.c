#include <stdio.h>
#include <string.h>

int valorRomano(char c) {
    switch(c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int romanoParaDecimal(char* numeroRomano) {
    int resultado = 0;
    int i;

    for (i = 0; i < strlen(numeroRomano); i++) {
        if (i > 0 && valorRomano(numeroRomano[i]) > valorRomano(numeroRomano[i - 1])) {
            resultado += valorRomano(numeroRomano[i]) - 2 * valorRomano(numeroRomano[i - 1]);
        } else {
            resultado += valorRomano(numeroRomano[i]);
        }
    }

    return resultado;
}

void decimalParaBi(int decimal) {
    int binario[20];
    int i = 0;

    if (decimal == 0) {
        printf("Base 2: 0\n");
        return;
    }

    while (decimal > 0) {
        binario[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    printf("Base 2: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");
}

int main() {
    char numeroRomano[20];
    int decimal;

    printf("Digite um número romano: ");
    scanf("%s", numeroRomano);

    decimal = romanoParaDecimal(numeroRomano);

    printf("Número Romano: %s\n", numeroRomano);
    printf("Base 10: %d\n", decimal);
    decimalParaBi(decimal);

    return 0;
}
