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

    for (int i = 0; i < strlen(numeroRomano); i++) {
        int valorAtual = valorRomano(numeroRomano[i]);

        if (i + 1 < strlen(numeroRomano)) {
            int valorProximo = valorRomano(numeroRomano[i + 1]);

            if (valorAtual < valorProximo) {
                resultado -= valorAtual;
            } else {
                resultado += valorAtual;
            }
        } else {
            resultado += valorAtual;
        }
    }

    return resultado;
}

void decimalParaBi(int decimal, char *numeroRomano) {
    int binario[20];
    int i = 0;

    if (decimal == 0) {
        printf("%s na base 2: 0\n", numeroRomano);
        return;
    }

    while (decimal > 0) {
        binario[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    printf("%s na base 2: ", numeroRomano);
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");
}

int main() {
    char numeroRomano[12];
    int decimal;

    scanf("%s", numeroRomano);

    decimal = romanoParaDecimal(numeroRomano);

    decimalParaBi(decimal, numeroRomano);
    printf("%s na base 10: %d\n", numeroRomano, decimal);
    printf("%s na base 16: %X\n", numeroRomano, decimal);

    return 0;
}
