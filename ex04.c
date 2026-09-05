/* EX04
Leia 10 números inteiros e armazene-os em um vetor.
a) Mostre todos os elementos do vetor. b) Calcule a soma dos elementos. c) Calcule a média. d) Identifique o maior valor. e) Identifique o menor valor.
*/
#include <stdio.h>

int main() {
    int maior, menor;
    int soma = 0;
    int vetorNum[10];

    for(int i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetorNum[i]);
        soma += vetorNum[i];

        if (i == 0) {
            maior = vetorNum[i];
            menor = vetorNum[i];
        } else {
            if (vetorNum[i] > maior) {
                maior = vetorNum[i];
            }
            if (vetorNum[i] < menor) {
                menor = vetorNum[i];
            } 
        }
    }

    printf("\nValores do vetor:");
    for(int i= 0; i < 10; i++) {
        printf("\nValor %d: %d", i+1, vetorNum[i]);
    }

    printf("\n\nSoma = %d", soma);
    printf("\nMedia = %d", soma/10);
    printf("\nO maior valor e: %d\nO menor valor e: %d", maior, menor);

    return 0;
}