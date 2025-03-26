#include <stdio.h>

int main() {
    char tecla;

    printf("Pressione uma tecla: ");
    scanf("%c", &tecla); // tecla = 'a';
    getchar(); //ler o /n da leitura anterior
    printf("A tecla selecionada foi:'%c'\n", tecla);

    
    printf("Pressione outra tecla: ");
    scanf("%c", &tecla); // tecla = 'a';
    getchar();
    printf("A tecla selecionada foi:'%c'\n", tecla);


    printf("Pressione outra tecla: ");
    scanf("%c", &tecla); // tecla = 'a';
    printf("A tecla selecionada foi:'%c'\n", tecla);

    return 0;
}