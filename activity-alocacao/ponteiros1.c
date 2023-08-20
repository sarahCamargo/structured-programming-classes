#include <stdio.h>
#define MAX 5

void carrega(int *vetor, int tamanho){
    int i = 0, numero;
    for (i = 0; i < tamanho; i++){
        printf("Digite um numero inteiro:\n");
        scanf("%d", &numero);
        vetor[i] = numero;
    }
}

int novoVetor(int *v1, int *v2, int *v3, int tamanho){
    int i = 0, z = 0, cont = 0;
    for (i = 0; i < tamanho; i++){
        for (z = 0; z < tamanho; z++){
            if (v1[i] == v2[z]){
                v3[cont] = v2[z];
                cont ++;
            }
        }
    }
    return cont;
}
//cont serve para o printf nao imprimir valores errados

void somaVetor(int *ponteiro, int *tamanhovetor, int *total){
    int i = 0, numero;
    numero = *tamanhovetor;
    for (i = 0; i < numero; i++){
        *total += ponteiro[i];
    }
}

void imprimeVetor (int *vet1, int *vet2, int *vet3, int tamanho1, int *tamanhov3) {
    int i;  
    printf("\n\n-----------------------");
    printf("\nValores Vetor 1:\n");
    for (i = 0; i < tamanho1; i++){
        printf("%d  ", vet1[i]);
    }
    printf("\n");
    printf("-----------------------");
    printf("\nValores Vetor 2:\n");
    for (i = 0; i < tamanho1; i++){
        printf("%d  ", vet2[i]);
    }
    printf("\n");
    printf("-----------------------");
    printf("\nValores Vetor 3:\n");
    for (i = 0; i < *tamanhov3; i++){
        printf("%d  ", vet3[i]);
    }
    printf("\n");
    printf("-----------------------");
}

int main() {
    int vetor1[MAX];
    int vetor2[MAX];
    int vetor3[MAX];
    int tamanhov3;
    int i = 0 ;
    int totalsoma = 0;

    printf("\nPreencha o Vetor 1:\n");
    carrega(vetor1, MAX);
    printf("\nPreencha o Vetor 2:\n");
    carrega(vetor2, MAX);
    tamanhov3 = novoVetor(vetor1, vetor2, vetor3, MAX);
    
    imprimeVetor(vetor1, vetor2, vetor3, MAX, &tamanhov3);
    somaVetor(vetor3, &tamanhov3, &totalsoma);
    printf("\n\nSoma total dos valores do terceiro vetor: %d\n\n", totalsoma);
    
    return 0;
}