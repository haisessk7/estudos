#include <stdio.h>
#include <string.h>

int main(void) {
    char allowedCardState[9] = "ABCDEFGH";
    char *allowedCodes[] = {"01", "02", "03", "04"};
    int allowed = 0;

    char cardState[2];
    char cardCode[4];
    char cityName[50];
    int pop;
    float area;
    float pib;
    int tP;

    printf("Digita uma letra de A a H ai\n");

    scanf("%1s", cardState);

    if (!(int) strchr(allowedCardState, cardState[0])) {
        printf("Estado da carta invalido\n");

        return 400;
    }

    printf("Digita agora o o Estado seguido de um numero de 01 a 04, eg: A02\n");

    scanf("%3s", cardCode);

    if (cardState[0] != cardCode[0]) {
        printf("A letra do Estado tem que ser igual, seu arrombado\n");

        return 400;
    }

    char codeDigits[3];
    codeDigits[0] = cardCode[1];
    codeDigits[1] = cardCode[2];
    codeDigits[2] = '\0';

    for (int i = 0; i < 4; i++) {
        if (strcmp(codeDigits, allowedCodes[i]) == 0) {
            allowed = 1;

            break;
        }
    }

    if (!allowed) {
        printf("O codigo tem que ser entre 01 e 04, songomongo\n");

        return 400;
    }

    printf("Digite o nome da cidade\n");
    scanf("%49s", &cityName);

    printf("Digite a populacao\n");
    scanf("%d", &pop);

    printf("Digite a area total\n");
    scanf("%f", &area);

    printf("Digite o PIB\n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos\n");
    scanf("%d", &tP);

    printf("RESULTADO:\n"
           "codigo estado: %s\n"
           "codigo carta: %s\n"
           "nome cidade: %s\n"
           "populacao: %d\n"
           "area: %f\n"
           "pib: %f\n"
           "pontos turisticos: %d\n", cardState, cardCode, cityName, pop, area, pib, tP);

    return 0;
}
