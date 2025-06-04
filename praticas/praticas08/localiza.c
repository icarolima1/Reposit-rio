#include <stdio.h>

int main() {
    int numeros[10];
    int numero, achou = -1;

    printf("Digite 10 numeros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("Digite um numero para buscar: ");
    scanf("%d", &numero);

    for (int i = 0; i < 10; i++) {
        if (numeros[i] == numero) {
            achou = i;
        }
    }

    if (achou < 0) {
        printf("O numero nao foi encontrado!\n");
    } else {
        printf("O numero foi encontrado na posicao %d\n", achou);
    }

    return 0;
}