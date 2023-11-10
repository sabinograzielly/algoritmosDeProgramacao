#include <stdio.h>
#include <string.h>

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


   decimal = numeroRomanoParaDecimal

    decimalParaBi(decimal, numeroRomano);
    printf("%s na base 10: %d\n", numeroRomano, decimal);
    printf("%s na base 16: %x\n", numeroRomano, decimal);

    return 0;
}
