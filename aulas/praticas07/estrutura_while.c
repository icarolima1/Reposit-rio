#include <stdio.h>

int main(){

    int nota = 0;
    printf("Entre com uma nota entre 1 e 10: ");
    scanf("%i", &nota);

    while(nota < 1 || nota > 10){
        printf("Nota invalida! Entre com uma nota entre 1 e 10: ");
        scanf("%i", &nota);
    }
    
    printf("A nota escolhida foi: %i", nota);
    
    return 0;
}