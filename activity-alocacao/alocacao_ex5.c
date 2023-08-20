#include <stdio.h>
#include <stdlib.h>
/**
5. Faça um programa que leia um número N e:
• Crie dinamicamente e leia um vetor de inteiro de N posições;
• Leia um número inteiro X e conte e mostre os múltiplos desse número que existem
no vetor.
*/

int main()
{
    int n = 0, x = 0, contx = 0, aux = 0, auxFor = 0;
    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &n);

    int *vetor = (int*) malloc(n * sizeof(int));
    int *vetorMulti = (int*) malloc(aux * sizeof(int));

    for (int i = 0; i < n; i++){
        printf("Digite um numero para colocar na posicao vetor[%d]: \n", i);
        scanf("%d", &vetor[i]);
    }
    printf("\nDigite o valor de X: \n");
    scanf("%d", &x);
    for (int z = 0; z < n; z++){
        if (vetor[z]%x == 0){
            contx++;
            vetorMulti = (int*) realloc(vetorMulti, contx * sizeof(int));
            vetorMulti[auxFor] = vetor[z];
            auxFor++;
        }
    }
    printf("Existem %d valores multiplos de %d dentro do vetor, sao eles:\n", contx, x);
    for (int w = 0; w < contx; w++){
        printf("%d\n", vetorMulti[w]);
    }

    free(vetor);
    free(vetorMulti);
}
