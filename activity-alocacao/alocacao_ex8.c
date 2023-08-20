#include <stdio.h>
#include <stdlib.h>
/**
8. Faça um programa para armazenar em memória um vetor de dados contendo 1500
valores do tipo int, usando a função de alocação dinâmica de memória CALLOC:
(a) Faça um loop e verifique se o vetor contém realmente os 1500 valores inicializados
com zero (conte os 1500 zeros do vetor).
(b) Atribua para cada elemento do vetor o valor do seu indice junto a este vetor.
(c) Exibir na tela os 10 primeiros e os 10 ´ultimos elementos do vetor.
*/

int main()
{
    int contzero = 0;

    int *vetor = (int*) calloc(1500, sizeof(int));

    for (int i = 0; i<1500; i++){
        if (vetor[i] == 0){
            contzero++;
        }
    }

    printf("Quantidade de valores inicializados com 0: %d", contzero);

    for (int z = 0; z<1500; z++){
        vetor[z] = z;
    }

    printf("\n\nPrimeiros 10 numeros do vetor: \n");
    for (int x = 0; x < 10; x++){
        printf("%d\n", vetor[x]);
    }

    printf("\nUltimos 10 numeros do vetor: \n");
    for (int w = 1490; w < 1500; w++){
        printf("%d\n", vetor[w]);
    }

    free(vetor);
}
