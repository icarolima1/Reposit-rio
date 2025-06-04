#include <stdio.h>
#include <string.h>

int main() {
    char frase[31];
    char letra;
    int quantidade = 0;
    
    scanf(" %[^\n]", frase);
    scanf(" %c", &letra);
    
    for(int i=0; i<strlen(frase); i++) {
        if (frase[i] == letra) {
            quantidade++;
        }
    }
    
    if (quantidade > 0) {
        printf("%d\n", quantidade);
    } else {
        printf("A frase nao contem a letra!\n");
    }
    
    return 0;
}