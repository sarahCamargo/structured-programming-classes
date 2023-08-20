#include <stdio.h>
#include <stdlib.h>
/**
1. Crie um programa que:
(a) Aloque dinamicamente um array de 5 numeros inteiros,
(b) Peça para o usuario digitar os 5 numeros no espaço alocado,
(c) Mostre na tela os 5 numeros,
(d) Libere a memoria alocada.
*/
int main()
{
    int *a = (int*) malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++){
        printf("Digite um numero para colocar na posicao a[%d]: \n", i);
        scanf("%d", &a[i]);
    }
    printf("Os numeros digitados foram: \n");
    for (int z = 0; z < 5; z++){
        printf("a[%d] = ", z);
        printf("%d\n", a[z]);
    }
    free(a);
}
