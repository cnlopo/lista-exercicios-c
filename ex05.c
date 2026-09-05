/* EX05
Leia 10 números inteiros. Em seguida, solicite ao usuário um valor a ser procurado no vetor.
a) A função deve retornar a posição em que o elemento foi encontrado. b) Caso o valor não exista, retorne -1. c) Mostre uma mensagem adequada no programa principal.
*/
#include <stdio.h>

int buscar(int vetor[], int tamanho, int valor) {
    for(int i = 0; i < tamanho; i++) {
        if (i == tamanho) {
            if (valor == vetor[i]) {
                printf("O valor foi encontrado na posicao: %d", i);
            } else {
                return -1;
            }
        } else {
            if (valor == vetor[i]) {
                printf("O valor foi encontrado na posicao %d indice [%d]", i+1, i);
            }
        }
    }
}

int main() {
    int vetorNum[10];
    int vetorTam = 10;
    int numdesejado;

    for(int i = 0; i < vetorTam; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetorNum[i]);
    }

    printf("\nDigite o valor a ser encontrado: ");
    scanf("%d", &numdesejado);

    buscar(vetorNum, vetorTam, numdesejado);

    return 0;
}