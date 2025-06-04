#include <stdio.h>
#include <string.h>

int main() {
    char primeiro_nome[11], ultimo_nome[11];
    char nome[31];
    
    scanf("%s %s", primeiro_nome, ultimo_nome);
    
    strcpy(nome, primeiro_nome);
    strcat(nome, " ");
    strcat(nome, ultimo_nome);
    
    printf("%s\n", nome);
    
    return 0;
}