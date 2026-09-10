/* EX06
Leia 5 números inteiros em um vetor. Depois, percorra o vetor utilizando aritmética de ponteiros
a) Imprima todos os elementos sem utilizar vetor[i] na impressão. b) Altere cada elemento para o dobro do valor original usando ponteiros. c) Mostre o vetor após a alteração.
*/
#include <stdio.h>

int main() {
    int vetor[5];
    int *ptr = vetor;

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 5; i++) {
        *(ptr + i) *= 2;
    }

    printf("\nDobro dos valores digitados:\n");
    for (int i = 0; i < 5; i++) {
        printf("Posicao [%d] valor = %d\n", i, *(ptr + i));
    }

    return 0;
}