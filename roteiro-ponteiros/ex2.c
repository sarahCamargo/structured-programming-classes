#include <stdio.h>

//2. Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço.

int main(void) {
    int a, b;
    int *p_a, *p_b;
    p_a = &a;
    p_b = &b;

    if (p_a > p_b){
        printf("O endereco da variavel A: %d eh maior do que o da variavel B", p_a);
    } else {
        printf("O endereco da variável B: %d eh maior do que o da variavel A", p_b);
    }

}
