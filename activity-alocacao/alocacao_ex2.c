#include <stdio.h>
#include <stdlib.h>
/**
2. Faça um programa que leia do usuario o tamanho de um vetor a ser lido e faça a
alocação dinamica de memoria. Em seguida, leia do usuario seus valores e imprima o
vetor lido
*/
int main()
{
    int tamanho = 0;
    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &tamanho);

    int *vetor = (int*) malloc(tamanho * sizeof(int));

    for (int i = 0; i < tamanho; i++){
        printf("Digite um numero para colocar na posicao vetor[%d]: \n", i);
        scanf("%d", &vetor[i]);
    }
    printf("Os numeros digitados foram: \n");
    for (int z = 0; z < tamanho; z++){
        printf("vetor[%d] = ", z);
        printf("%d\n", vetor[z]);
    }
    free(vetor);
}
