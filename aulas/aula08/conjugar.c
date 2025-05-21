#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char verbo[21];

    char pronomes[6][5] = {"EU", "TU", "ELE", "NOS", "VOS", "ELES"};
    char sufixos[6][5] = {"O", "AS", "A", "AMOS", "AIS", "AMAM"};

    printf("Entre com um verbo terminado em AR: ");
    scanf("%s", verbo);

    int tamanho = strlen(verbo);

    for(int i = 0; i < tamanho; i++){
        verbo[i] = toupper(verbo[i]);
    }
    int ultima_posicao = tamanho -1;
    int penultima_posicao = ultima_posicao -1;

    if (verbo[ultima_posicao] == 'A' && verbo[penultima_posicao] == 'R'){
        printf("Conjugacao do Verbo %s no presente do indicador\n");
        char radical[21];
        strcpy(radical, verbo);
        radical[penultima_posicao] = '\0';
        for(int i = 0; i < 6; i++){
            char conjugacao[61];
            strcpy(conjugacao, pronomes[i]);
            strcat(conjugacao, " ");
            strcat(conjugacao, radical);
            strcat(conjugacao, sufixos[i]);
            printf("%s\n", conjugacao);
        }
    }
    else {
        printf("Verbo %s nao termina em AR!\n");
    }



    return 0;
}