/* EX07
Crie uma estrutura para armazenar matrícula, nome e nota de um aluno.
a) Leia os dados de um aluno. b) Mostre todos os dados armazenados.
*/
#include <stdio.h>

struct Aluno {
    int matricula;
    char nome[50];
    float nota;
};

int main() {
    struct Aluno a1;

    printf("Digite a matricula do aluno: ");
    scanf("%d", &a1.matricula);
    printf("Digite o nome do aluno: ");
    scanf("%s", &a1.nome);
    printf("Digite a nota do aluno: ");
    scanf("%f", &a1.nota);

    printf("\nMatricula: %d", a1.matricula);
    printf("\nNome: %s", a1.nome);
    printf("\nNota: %.2f", a1.nota);

    return 0;
}