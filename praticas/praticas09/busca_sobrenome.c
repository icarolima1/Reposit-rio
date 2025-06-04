#include <stdio.h>
#include <string.h>

int main() {
    char nomes[10][101];
    char sobrenome[11];
    int achou = 0;
    
    for(int i=0; i<10; i++) {
        scanf(" %[^\n]", nomes[i]);
    }
    
    scanf("%s", sobrenome);
    
    for(int i=0; i<10; i++) {
        if (strstr(nomes[i], sobrenome)) {
            printf("%s\n", nomes[i]);
            achou = 1;
        }
    }
    
    if (!achou) {
        printf("Nenhum nome tem o sobrenome!\n");
    }
    
    return 0;
}