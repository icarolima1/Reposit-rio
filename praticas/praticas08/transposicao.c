#include <stdio.h>
#include <string.h>

int main() {
    char frase[31], matriz[6][5];
    int k = 0;

    printf("Digite uma frase (ate 30 caracteres): ");
    scanf("%30[^\n]", frase);

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = (frase[k] != '\0') ? frase[k++] : ' ';
        }
    }

    printf("A transposicao da frase eh:\n");
    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 6; i++) {
            printf("%c", matriz[i][j]);
        }
    }

    return 0;
}