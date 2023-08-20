#include <stdio.h>
#include <stdlib.h>
//4. Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2 variáveis e troque o
//seu conteúdo, ou seja, esta função é chamada passando duas variáveis A e B por exemplo e, após a execução
//da função, A conterá o valor de B e B terá o valor de A.

void troca(int *n1, int *n2) {
    int aux;

    aux = *n1;

    *n1 = *n2;
    *n2 = aux;

}

int main()
{
    int a, b;

    printf("Digite o valor de A:");
    scanf("%d", &a);
    printf("\nDigite o valor de B:");
    scanf("%d", &b);

    troca(&a, &b);

    printf("\nO valor de A ficou: %d\ne o valor de B ficou: %d\n", a, b);


}
