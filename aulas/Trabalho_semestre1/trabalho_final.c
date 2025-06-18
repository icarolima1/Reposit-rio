#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 100

int main() {
    struct Aluno {
        int matricula;
        char nome[50];
        float nota1, nota2;
    };

    struct Aluno alunos[MAX_ALUNOS];
    int totalAlunos = 0;
    int opcao;

    do {
        printf("\n====== MENU PRINCIPAL ======\n");
        printf("1. Cadastrar aluno\n");
        printf("2. Listar alunos\n");
        printf("3. Buscar aluno por matricula\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao (1-4): ");
        scanf("%d", &opcao);

        while (opcao < 1 || opcao > 4) {
            printf("Opcao invalida! Digite um valor entre 1 e 4: ");
            scanf("%d", &opcao);
        }

        if (opcao == 1) {
            if (totalAlunos < MAX_ALUNOS) {
                printf("\n--- Cadastro de Aluno ---\n");

                printf("Digite a matricula: ");
                scanf("%d", &alunos[totalAlunos].matricula);

                printf("Digite o nome: ");
                getchar();
                fgets(alunos[totalAlunos].nome, 50, stdin);
                alunos[totalAlunos].nome[strcspn(alunos[totalAlunos].nome, "\n")] = 0;

                do {
                    printf("Digite a nota 1 (0 a 10): ");
                    scanf("%f", &alunos[totalAlunos].nota1);
                } while (alunos[totalAlunos].nota1 < 0 || alunos[totalAlunos].nota1 > 10);

                do {
                    printf("Digite a nota 2 (0 a 10): ");
                    scanf("%f", &alunos[totalAlunos].nota2);
                } while (alunos[totalAlunos].nota2 < 0 || alunos[totalAlunos].nota2 > 10);

                totalAlunos++;
                printf("Aluno cadastrado com sucesso!\n");
            } else {
                printf("Limite de alunos atingido!\n");
            }

        } else if (opcao == 2) {
            printf("\n--- Lista de Alunos ---\n");
            if (totalAlunos == 0) {
                printf("Nenhum aluno cadastrado.\n");
            } else {
                for (int i = 0; i < totalAlunos; i++) {
                    printf("Matricula: %d\n", alunos[i].matricula);
                    printf("Nome: %s\n", alunos[i].nome);
                    printf("Nota 1: %.2f | Nota 2: %.2f\n", alunos[i].nota1, alunos[i].nota2);
                    printf("-----------------------------\n");
                }
            }

        } else if (opcao == 3) {
            int busca;
            printf("\nDigite a matricula do aluno a buscar: ");
            scanf("%d", &busca);
            int encontrado = 0;
            for (int i = 0; i < totalAlunos; i++) {
                if (alunos[i].matricula == busca) {
                    printf("Aluno encontrado:\n");
                    printf("Nome: %s\n", alunos[i].nome);
                    printf("Nota 1: %.2f | Nota 2: %.2f\n", alunos[i].nota1, alunos[i].nota2);
                    encontrado = 1;
                    break;
                }
            }
            if (!encontrado) {
                printf("Aluno nao encontrado.\n");
            }

        } else if (opcao == 4) {
            printf("Saindo do programa. Ate logo!\n");
        }

    } while (opcao != 4);

    return 0;
}