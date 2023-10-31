#include <stdio.h>

int main() {
    int forcasTimeA[11] = {0}, forcasTimeB[11] = {0};
    char nomeTimeA[31], nomeTimeB[31];
    char nome[31], posicao;
    int forca;

    float calculaForcaPonderada(int forcas[]) {
        return 
    (8*forcas[0]+10*(forcas[1] + forcas[2])+5*(forcas[3]+forcas[4])+8*(forcas[5]+forcas[6])+11*(forcas[7]+forcas[8])+12*(forcas[9]+forcas[10]))/ 100.0;
    }

    scanf(" %30[^\n]", nomeTimeA);
    for (int i = 0; i < 11; i++) {
        scanf(" %30[^;]; %c; %d", nome, &posicao, &forca);

        int pos = (posicao == 'L') ? (forcasTimeA[1] == 0) ? 1 : 2 : 
        (posicao == 'Z') ? (forcasTimeA[3] == 0) ? 3 : 4 : 
        (posicao == 'V') ? (forcasTimeA[5] == 0) ? 5 : 6 : 
        (posicao == 'M') ? (forcasTimeA[7] == 0) ? 7 : 8 : 
        (posicao == 'A') ? (forcasTimeA[9] == 0) ? 9 : 10 : 0;

        if (forcasTimeA[pos] == 0)
            forcasTimeA[pos] = forca;
    }

    scanf(" %30[^\n]", nomeTimeB);
    for (int i = 0; i < 11; i++) {
        scanf(" %30[^;]; %c; %d", nome, &posicao, &forca);

        int pos = (posicao == 'L') ? (forcasTimeB[1] == 0) ? 1 : 2 : 
        (posicao == 'Z') ? (forcasTimeB[3] == 0) ? 3 : 4 : 
        (posicao == 'V') ? (forcasTimeB[5] == 0) ? 5 : 6 : 
        (posicao == 'M') ? (forcasTimeB[7] == 0) ? 7 : 8 : 
        (posicao == 'A') ? (forcasTimeB[9] == 0) ? 9 : 10 : 0;

        if (forcasTimeB[pos] == 0)
            forcasTimeB[pos] = forca;
    }

    float forcaTimeA = calculaForcaPonderada(forcasTimeA);
    float forcaTimeB = calculaForcaPonderada(forcasTimeB);

    printf("%s: %.2f de forca\n%s: %.2f de forca\n", nomeTimeA, forcaTimeA, nomeTimeB, forcaTimeB);

    if (forcaTimeA > forcaTimeB)
        printf("%s eh mais forte\n", nomeTimeA);
    else if (forcaTimeB > forcaTimeA)
        printf("%s eh mais forte\n", nomeTimeB);
    else
        printf("Os times têm a mesma força\n");

    return 0;
}