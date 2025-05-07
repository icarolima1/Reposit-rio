#include <stdio.h> 
#include <stdlib.h>

#define BLACK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define PURPLE "\e[0;35m"
#define CYAN "\e[0;36m"
#define reset "\e[0m"

int main (){
    int opcao = 0;

    while (opcao != 4){
    printf(GRN);
    printf("|-------------------|\n");
    printf(reset);
    printf(GRN);
    printf("|");
    printf(reset);  
    printf("  MENU PRINCIPAL");
    printf(GRN);
    printf("   |\n");
    printf(reset);
    printf(GRN);
    printf("|-------------------|\n");
    printf(reset);
    printf(GRN);
    printf("|"); 
    printf(reset);
    printf(" 1 - Novo Jogo");
    printf(GRN);
    printf("     |\n");
    printf(reset);
    printf(GRN);
    printf("|");
    printf(reset);
    printf(" 2 - Ver Score");
    printf(GRN);
    printf("     |\n");
    printf(reset);
    printf(GRN);
    printf("|");
    printf(reset);
    printf(" 3 - Sobre o jogo");
    printf(GRN);
    printf("  |\n");
    printf(reset);
    printf(GRN);
    printf("|");
    printf(reset);
    printf(" 4 - Sair");
    printf(GRN);
    printf("          |\n");
    printf(reset);
    printf(GRN);
    printf("|-------------------|\n");
    printf(reset);

    printf(YEL);
    printf("Escolha uma opcao: ");
    printf(reset);
    scanf("%i", &opcao);
    while (getchar() != '\n');

    switch(opcao){
    case 1: {
        int nivel = 0;
        system("clear");
        printf(RED);
        printf("Nivel do Jogo\n");
        printf("1 - Facil\n");
        printf("2 - Medio\n");
        printf("3 - Dificil\n");
        printf(reset);
        printf(YEL);
        printf("Escolha um nivel: ");
        printf(reset);
        scanf("%i", &nivel);
        while (getchar() != '\n');
        break;
    }
    case 2: {
        system("clear");
        printf(CYAN);
        printf("Score do Jogo\n");
        printf("1 - Jogador A - 10000 pontos\n");
        printf("2 - Jogador B - 7000 pontos\n");
        printf("3 - Jogador C - 5000 pontos\n");
        printf("4 - Jogador D - 3000 pontos\n");
        printf("5 - Jogador E - 1000 pontos\n");
        printf(reset);
        printf(YEL);
        printf("Pressione ENTER para continuar.");
        printf(reset);
        while (getchar() != '\n');
        break;
    }
    case 3: {
        system("clear");
        printf(PURPLE);
        printf("Sobre o Jogo\n\n");
        printf("Desenvolvido em C\n");
        printf("Por Dev1 e Dev2\n\n");
        printf("Copyright (C) 2025\n");
        printf(reset);
        printf(YEL);
        printf("Pressione ENTER para continuar.");
        printf(reset);
        while (getchar() != '\n');
        break;
    }
    case 4: {
        printf(RED);
        printf("\nAte logo!\n");
        printf(reset);
        break;
    }
    default: printf("Opcao invalida! Tente novamente.\n");
}
}

    return 0;
}