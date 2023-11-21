#include <stdio.h>
#include <string.h>
#include <ctype.h>

int validarFormatoPlaca(char *placa) {
    int len = strlen(placa);
    if ((len == 8 || len == 7) &&
        ((isalpha(placa[0]) && isalpha(placa[1]) && isalpha(placa[2]) &&
          isdigit(placa[len - 1])) ||
         (isalpha(placa[0]) && isalpha(placa[1]) && isalpha(placa[2]) &&
          isalpha(placa[3]) && isdigit(placa[len - 1])))) {
        return 1;
    }

    return 0;
}

int validarDia(char *dia) {
    return (strcmp(dia, "segunda-feira") == 0 || strcmp(dia, "terca-feira") == 0 ||
            strcmp(dia, "quarta-feira") == 0 || strcmp(dia, "quinta-feira") == 0 ||
            strcmp(dia, "sexta-feira") == 0 || strcmp(dia, "sabado") == 0 ||
            strcmp(dia, "domingo") == 0);
}

int main() {
    char placa[10], dia[20];

    scanf("%s", placa);

    for (int i = 0; i < strlen(placa); i++) {
        placa[i] = toupper(placa[i]);
    }

    scanf("%s", dia);

    for (int i = 0; i < strlen(dia); i++) {
        dia[i] = tolower(dia[i]);
    }

    int ultimoDigitoPlaca = placa[6] - '0';

    if (!validarFormatoPlaca(placa)) {
        printf("Placa invalida\n");
    } else if (!validarDia(dia)) {
        printf("Dia da semana invalido\n");
    } else if (strcmp(dia, "sabado") == 0 || strcmp(dia, "domingo") == 0) {
        printf("Nao ha proibicao no fim de semana\n");
    } else {
        if (strcmp(dia, "segunda-feira") == 0 || strcmp(dia, "terca-feira") == 0 ||
            strcmp(dia, "quarta-feira") == 0 || strcmp(dia, "quinta-feira") == 0 ||
            strcmp(dia, "sexta-feira") == 0) {
            if ((ultimoDigitoPlaca == 0 || ultimoDigitoPlaca == 1) && strcmp(dia, "segunda-feira") == 0) {
                printf("%s nao pode circular %s\n", placa, dia);
            } else if ((ultimoDigitoPlaca == 2 || ultimoDigitoPlaca == 3) && strcmp(dia, "terca-feira") == 0) {
                printf("%s nao pode circular %s\n", placa, dia);
            } else if ((ultimoDigitoPlaca == 4 || ultimoDigitoPlaca == 5) && strcmp(dia, "quarta-feira") == 0) {
                printf("%s nao pode circular %s\n", placa, dia);
            } else if ((ultimoDigitoPlaca == 6 || ultimoDigitoPlaca == 7) && strcmp(dia, "quinta-feira") == 0) {
                printf("%s nao pode circular %s\n", placa, dia);
            } else if ((ultimoDigitoPlaca == 8 || ultimoDigitoPlaca == 9) && strcmp(dia, "sexta-feira") == 0) {
                printf("%s nao pode circular %s\n", placa, dia);
            } else {
                printf("%s pode circular %s\n", placa, dia);
            }
        }
    }

    return 0;
}
// 90% certo, está aparecendo que o carro não pode circular, mesmo em dias que ele pode circular 