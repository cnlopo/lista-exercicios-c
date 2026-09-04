/* EX03
Leia três números inteiros. Crie uma função que determine o maior e o menor valor e devolva os dois resultados por meio de ponteiros.
a) Não utilize variáveis globais. b) Mostre o maior e o menor valor no programa principal.
*/
#include <stdio.h>

void maiorMenor(int a, int b, int c, int *maior, int *menor) {
    if (a > b && a > c) {
        *maior = a;
    } else if (b > a && b > c) {
        *maior = b;
    } else {
        *maior = c;
    }

    if (a < b && a < c) {
        *menor = a;
    } else if (b < a && b < c) {
        *menor = b;
    } else {
        *menor = c;
    }
}

int main() {
    int valor1, valor2, valor3;
    int maior = 0;
    int menor = 0;
    
    printf("Digite o valor 1: ");
    scanf("%d", &valor1);
    printf("Digite o valor 2: ");
    scanf("%d", &valor2);
    printf("Digite o valor 3: ");
    scanf("%d", &valor3);

    maiorMenor(valor1, valor2, valor3, &maior, &menor);

    printf("\nO maior valor e: %d\nO menor valor e: %d", maior, menor);

    return 0;
}