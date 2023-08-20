#include <stdio.h>
#include <stdlib.h>

//3. Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado. Em seguida,
//compare seus endereços e exiba o conteúdo do maior endereço

int main()
{
    int n1, n2;
    int *p_n1, *p_n2;

    p_n1 = &n1;
    p_n2 = &n2;

    printf("Digite o valor da variavel N1\n");
    scanf("%d", &n1);
    printf("\nDigite o valor da variavel N2\n");
    scanf("%d", &n2);

    if ( p_n1 > p_n2){
        printf("O endereco da variavel N1 eh maior do que o endereco da variavel N2\nE seu conteudo eh: %d", *p_n1);
    } else {
        printf("O endereco da variavel N2 eh maior do que o endereco da variavel N1\nE seu conteudo eh: %d", *p_n2);
    }
}

