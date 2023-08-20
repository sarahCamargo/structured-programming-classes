#include <stdio.h>
#include <stdlib.h>
/**
3. Faça um programa que leia do usuário o tamanho de um vetor a ser lido e Faça a
alocação dinâmica de memória. Em seguida, leia do usuário seus valores e mostre
quantos dos números são pares e quantos são ímpares
*/
int main()
{
    int tamanho = 0, contPar = 0, contImpar = 0;
    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &tamanho);

    int *vetor = (int*) malloc(tamanho * sizeof(int));

    for (int i = 0; i < tamanho; i++){
        printf("Digite um numero para colocar na posicao vetor[%d]: \n", i);
        scanf("%d", &vetor[i]);
        if (vetor[i]%2 == 0){
            contPar++;
        } else {
            contImpar++;
        }
    }
    printf("\nOs numeros digitados foram: \n");
    for (int z = 0; z < tamanho; z++){
        printf("vetor[%d] = ", z);
        printf("%d\n", vetor[z]);
    }

    printf("\nNo vetor existem %d numero(s) par(es) e %d numero(s) impar(es)", contPar, contImpar);
    free(vetor);
}
