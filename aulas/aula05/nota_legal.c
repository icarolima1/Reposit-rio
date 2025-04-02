#include <stdio.h>

int main() {
    char nome_produto[31];
    int quantidade;
    float preco;
    float valor_total;
    
    printf("Entre com o nome do produto: ");
    scanf("%[^\n]s", nome_produto);
    getchar();

    printf("Entre com a quantidade do produto: ");
    scanf("%i", &quantidade);

    printf("Entre com o preco do produto: ");
    scanf("%f", &preco);
    getchar();

    valor_total = preco * quantidade;
    
    printf("NOTA_LEGAL\n");
    printf("Item    Quantidade  Preco   Valor\n");
    printf("%-12s %01i %8.2f\n", nome_produto, quantidade, preco, valor_total);
    printf("Total: %26.2f", valor_total);

    return 0;
}