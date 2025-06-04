#include <stdio.h>

struct cliente_t {
    char nome[61];
    char telefone[15];
    char email[61];
};

int main() {
    struct cliente_t cliente;
    
    printf("Entre com o nome do cliente: ");
    scanf("%60[^\n]s", cliente.nome);
    getchar(); 
    
    printf("Entre com o telefone do cliente: ");
    scanf("%14[^\n]s", cliente.telefone);
    getchar();
    
    printf("Entre com o email do cliente: ");
    scanf("%60[^\n]s", cliente.email);
    getchar();
    
    printf("\nDados do cliente:\n");
    printf("Nome: %s\n", cliente.nome);
    printf("Telefone: %s\n", cliente.telefone);
    printf("Email: %s\n", cliente.email);
    
    return 0;
}