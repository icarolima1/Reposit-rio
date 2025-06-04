#include <stdio.h>

int main() {
    float notas[10], soma = 0.0f, media;
    int qtde_acima_media = 0;

    printf("Digite as notas de 10 alunos:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 10;

    for (int i = 0; i < 10; i++) {
        if (notas[i] > media) {
            qtde_acima_media++;
        }
    }

    printf("Media da turma: %.2f\n", media);
    printf("Alunos acima da media: %d\n", qtde_acima_media);

    return 0;
}