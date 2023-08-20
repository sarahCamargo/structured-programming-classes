#include <stdio.h>
#include <stdlib.h>
//5. Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2 valores de entrada
//e retorne o maior valor na primeira variável e o menor valor na segunda variável. Escreva o conteúdo das 2
//variáveis na tela.

void maior(int *n1, int *n2) {
    int aux;

    if (*n2 > *n1){
        aux = *n2;
        *n2 = *n1;
        *n1 = aux;
    }

}

int main() {
    int a, b;

    printf("Digite o valor de A:");
    scanf("%d", &a);
    printf("\nDigite o valor de B:");
    scanf("%d", &b);

    maior(&a, &b);

    printf("\nO valor de A ficou: %d\ne o valor de B ficou: %d\n", a, b);
}
