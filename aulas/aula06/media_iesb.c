#include <stdio.h>

int main(){
    float nota_a1 = 0.0f;
    float nota_a2 = 0.0f;
    int leu_certo = 0;

    printf("Entre com a sua nota A1: ");
    leu_certo = scanf("%f", &nota_a1);
    getchar();

    if (0.0f < nota_a1 || nota_a1 > 10.0f || !leu_certo){
        printf("A nota deve ser entre 0.0 e 10.0.\n");
    }

    printf("Entre com a sua nota A2: ");
    leu_certo = scanf("%f", &nota_a2);
    getchar();

    if (0.0f < nota_a2 || nota_a2 > 10.0f || !leu_certo){
        printf("A nota deve ser entre 0.0 e 10.0.\n");
    }

    float media = 0.4f * nota_a1 + 0.6 * nota_a2;

    if (media >= 9.0f && media <= 10.0f) {
        printf("A media eh %.f e a mencao SS.\n", media);
    }
    else if (media >= 7.0f && media <= 8.9f) {
        printf("A media eh %.1f e a mencao MS.\n", media);
    }
    else if (media >= 5.0f && media <= 6.9f) {
        printf("A media eh %.1f e a mencao MM.\n", media);
    }
    else if (media >= 3.0f && media <= 4.9f) {
        printf("A media eh %.1f e a mencao MI.\n", media);
    }
    else if (media >= 0.1f && media <= 2.9f) {
        printf("A media eh %.1f e a mencao II.\n", media);
    }
    else {
        printf("A media eh %.1f e a mencao SR.\n", media);
    }

    return 0;
}