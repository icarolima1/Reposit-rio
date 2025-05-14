#include <stdio.h>

int main(){

    int numero = 0;
    int fatorial = 1;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    for(int i = numero; i > 0; i--) {
        fatorial = fatorial * i;
    }    

    printf("O fatorial do numero %i eh: %i",numero, fatorial);

    return 0;
}