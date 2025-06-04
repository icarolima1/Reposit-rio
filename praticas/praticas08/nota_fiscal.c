#include <stdio.h>

int main() {
    float nota_fiscal[5][3], total = 0.0f;

    printf("Digite quantidade e preco de 5 produtos:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%f %f", &nota_fiscal[i][0], &nota_fiscal[i][1]);
        nota_fiscal[i][2] = nota_fiscal[i][0] * nota_fiscal[i][1];
        total += nota_fiscal[i][2];
    }

    printf("\nQuant | Preco | Total\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2f\t", nota_fiscal[i][j]);
        }
        printf("\n");
    }

    printf("\nTotal da nota: R$ %.2f\n", total);
    return 0;
}