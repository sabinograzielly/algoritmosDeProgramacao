#include <stdio.h>

int main() {
    int matrizA[4][4];
    int matrizB[4][4];
    int resultado[4][4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrizB[i][j]);
        }
    }

    char operacao[10];
    scanf("%s", operacao);

    if (operacao[0] == 's' && operacao[1] == 'o' && operacao[2] == 'm' && operacao[3] == 'a') {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                resultado[i][j] = matrizA[i][j] + matrizB[i][j];
                printf("%4d", resultado[i][j]);
            }
            printf("\n");
        }
    } else if (operacao[0] == 's' && operacao[1] == 'u' && operacao[2] == 'b') {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                resultado[i][j] = matrizA[i][j] - matrizB[i][j];
                printf("%4d", resultado[i][j]);
            }
            printf("\n");
        }
    } else if (operacao[0] == 'm' && operacao[1] == 'u' && operacao[2] == 'l' && operacao[3] == 't') {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                resultado[i][j] = 0;
                for (int k = 0; k < 4; k++) {
                    resultado[i][j] += matrizA[i][k] * matrizB[k][j];
                }
                printf("%4d", resultado[i][j]);
            }
            printf("\n");
        }
    } 

    return 0;
}