#include <stdio.h>
#include <stdlib.h>
//4. Fa�a um programa que leia 2 valores inteiros e chame uma fun��o que receba estas 2 vari�veis e troque o
//seu conte�do, ou seja, esta fun��o � chamada passando duas vari�veis A e B por exemplo e, ap�s a execu��o
//da fun��o, A conter� o valor de B e B ter� o valor de A.

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
