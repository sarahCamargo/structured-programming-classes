#include <stdio.h>

//2. Escreva um programa que contenha duas vari�veis inteiras. Compare seus endere�os e exiba o maior endere�o.

int main(void) {
    int a, b;
    int *p_a, *p_b;
    p_a = &a;
    p_b = &b;

    if (p_a > p_b){
        printf("O endereco da variavel A: %d eh maior do que o da variavel B", p_a);
    } else {
        printf("O endereco da vari�vel B: %d eh maior do que o da variavel A", p_b);
    }

}
