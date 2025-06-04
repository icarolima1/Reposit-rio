#include <stdio.h>

const int LIMITE = 10;

struct aluno_t {
    int matricula;
    char email[61];
};

int main() {
    struct aluno_t alunos[LIMITE];
    
    for(int i = 0; i < LIMITE; i++) {
        printf("Entre com a matricula do %io aluno: ", i+1);
        scanf("%i", &alunos[i].matricula);
        printf("Entre com o email do %io aluno: ", i+1);
        scanf("%60s", alunos[i].email);
    }
    
    int matricula;
    printf("\nEntre com uma matricula para busca: ");
    scanf("%i", &matricula);
    
    int achou = -1;
    for(int i = 0; i < LIMITE; i++) {
        if(matricula == alunos[i].matricula) {
            achou = i;
            break;
        }
    }
    
    if(achou < 0) {
        printf("Matricula nao localizada!\n");
    } else {
        printf("O email do aluno, matricula %i, eh %s\n", 
               alunos[achou].matricula, alunos[achou].email);
    }
    
    return 0;
}