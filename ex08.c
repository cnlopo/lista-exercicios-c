/* EX08
Utilize a struct Aluno, cadastre 5 alunos em um vetor.
a) Mostre todos os alunos cadastrados. b) Identifique o aluno com a maior nota. c) Calcule a média das notas da turma.
*/
#include <stdio.h>

struct Aluno {
    int matricula;
    char nome[50];
    float nota;
};

int main() {
    struct Aluno lista[4];

    int localizador = 0;
    float maiorNota = 0;
    float somaNotas = 0;

    for(int i = 0; i < 5; i++) {
        printf("Cadastro aluno %d:\n", i+1);
        printf("Digite a matricula do aluno: ");
        scanf("%d", &lista[i].matricula);
        printf("Digite o nome do aluno: ");
        scanf("%s", &lista[i].nome);
        printf("Digite a nota do aluno: ");
        scanf("%f", &lista[i].nota);
        printf("\n");

        if (lista[i].nota > maiorNota) {
            maiorNota = lista[i].nota;
            localizador = i;
        }

        somaNotas += lista[i].nota;
    }

    printf("---")
    for (int i = 0; i < 5; i++) {
        printf("Matricula: %d", lista[i].matricula);
        printf(" | Nome: %s", lista[i].nome);
        printf(" | Nota: %.2f", lista[i].nota);
        printf("\n");
    };

    printf("---")
    printf("\nNome do aluno com maior nota: %s", lista[localizador].nome);
    printf("\nMedia das notas da turma: %.2f", somaNotas/5);
    
    return 0;
}