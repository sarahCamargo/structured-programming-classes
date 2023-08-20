#include <stdio.h>

void buscar(int *cod, char *nome, float *valorUn) {

    printf("\nDigite o codigo do produto: ");
    scanf("%d", cod);
    printf("\nDigite o nome do produto: ");
    scanf(" %s", nome);
    printf("\nDigite o valor do produto por unidade: ");
    scanf("%f", valorUn);

}

void calcula(float *valorUn, float *valorFinal) {
    int quantidade;
    printf("\nQuantas unidades desse produto serao compradas? ");
    scanf("%d", &quantidade);
    *valorFinal = *valorUn * quantidade;
}

void imprime(int *codigo, float *vUnidade, char *nome, float *vTotal) {
  printf("\n\n--------VENDA--------\n");
  printf("Codigo: %d\n", *codigo);
  printf("Valor: %.2f\n", *vUnidade);
  printf("Nome: %s\n", nome);
  printf("VALOR TOTAL: %.2f", *vTotal);
}

int main() {
    int codigoProd = 0;
    char nomeProd[50];
    float valorUnidade = 0, valorTotal = 0;

    buscar(&codigoProd, nomeProd, &valorUnidade);
    calcula(&valorUnidade, &valorTotal);
    imprime(&codigoProd, &valorUnidade, nomeProd, &valorTotal);

    return 0;
}