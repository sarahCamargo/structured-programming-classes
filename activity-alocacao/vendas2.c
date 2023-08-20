#include <stdio.h>

void buscar(int *infoProduto) {
    printf("\nDigite o codigo do produto: ");
    scanf("%d", &infoProduto[0]);
    printf("\nDigite o valor do produto por unidade: ");
    scanf("%d", &infoProduto[1]);
    printf("\nQuantas unidades desse produto serao compradas? ");
    scanf("%d", &infoProduto[2]);
    printf("\nQual o valor do desconto do produto? ");
    scanf("%d", &infoProduto[3]);

}

void calcula(int *infoProduto, int *valorFinal, int *desconto, int *valorDesconto) {
  *valorFinal = infoProduto[1] * infoProduto[2];
  *desconto = *valorFinal * infoProduto[3]/100;
  *valorDesconto = *valorFinal - *desconto;
}

void imprime(int *infoProduto, int vTotal, int desconto, int vDesconto) {
  printf("\n\n----------------------------------\n");
  printf("PRODUTO              |     %-3d\n", infoProduto[0]);
  printf("VALOR UNI            |     %-3d\n", infoProduto[1]);
  printf("QUANTIDADE           |     %-3d\n", infoProduto[2]);
  printf("TOTAL                |     %-3d\n", vTotal);
  printf("----------------------------------\n");
  printf("DESCONTO %d           |     %-3d\n", infoProduto[3], desconto);
  printf("TOTAL GERAL          |     %-3d\n", vDesconto);
  printf("----------------------------------\n");
}

int main() {
    int vetorInfo[4] = {0};
    int valorTotal = 0, descontoReais = 0, valorcDesconto = 0;

    buscar(vetorInfo);
    calcula(vetorInfo, &valorTotal, &descontoReais, &valorcDesconto);
    imprime(vetorInfo, valorTotal, descontoReais, valorcDesconto);

    return 0;
}