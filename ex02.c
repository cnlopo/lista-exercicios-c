/* EX02
Crie uma função que receba o endereço de uma variável inteira e aumente seu valor em 10.
a) Leia um número no programa principal. b) Passe o endereço da variável para a função. c) Mostre o valor antes e depois da chamada.
*/
#include <stdio.h>

void aumentar(int *valor) {
    *valor = *valor + 10;
}

int main() {
    int value = 20;

    printf("Valor 1: %d", value);

    aumentar(&value);

    printf("\n\nValor 2: %d", value);

    return 0;
}