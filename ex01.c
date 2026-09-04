/* EX01
Crie um programa que leia dois números inteiros e utilize uma função com ponteiros para trocar os valores das duas variáveis.
a) Mostre os valores antes da troca. b) Chame a função trocar. c) Mostre os valores depois da troca.
*/
#include <stdio.h>

void trocar (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int valor1, valor2;
    
    printf("Digite o valor 1: ");
    scanf("%d", &valor1);
    printf("Digite o valor 2: ");
    scanf("%d", &valor2);

    trocar(&valor1, &valor2);

    printf("\nValor 1 agora e: %d\nValor 2 agora e: %d", valor1, valor2);

    return 0;
}