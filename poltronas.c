#include <stdio.h>

void limpa(char vetor[][5]) {
  for (int i = 0; i < 10; i++) {
    for (int z = 0; z < 5; z++) {
      vetor[i][z] = ' ';
    }
  }
}

void poltronasDispo(char vetor[][5]) {
  for (int i = 0; i < 10; i++) {
    for (int z = 0; z < 5; z++) {
      printf("[");
      printf("%c", vetor[i][z]);
      printf("]");
    }
    printf("\n");
  }
}

int verifica(linha, coluna) {
  if (linha > 10) {
    return 1;
  } else if (coluna > 5) {
    return 1;
  } else if (coluna == 0 || linha == 0) {
    return 1;
  }
  return 0;
}

int main() {
  char poltronas[10][5];
  int linha, coluna, opcao = 1, verificacao;
  limpa(poltronas);
  do {
    if (opcao == 1) {
      do {
        if (verificacao == 1) {
          printf("Coluna ou Fileira indisponível.\n");
        }
        printf("Poltronas disponíveis: \n\n");
        poltronasDispo(poltronas);
        printf("\nEscolha uma poltrona, digite a fila em que ela está: ");
        scanf("%d", & linha);
        printf("\nDigite a coluna em que ela está: ");
        scanf("%d", & coluna);
        verificacao = verifica(linha, coluna);
      } while (verificacao == 1);
      poltronas[linha - 1][coluna - 1] = 'x';
      printf("Poltrona escolhida: Poltrona %d fileira %d\n", linha, coluna);
    }
    printf("\nEscolha uma opcao:\n");
    printf("\n1.Continuar Comprando\n2.Confirmar compra\n3.Verificar poltronas disponíveis\n4.Cancelar\n");
    scanf("%d", & opcao);

    if (opcao == 2) {
      printf("\nCompra efetuada com sucesso. Poltronas selecionadas: \n");
      poltronasDispo(poltronas);
      return 0;
    } else if (opcao == 3) {
      printf("\nPoltronas: \n");
      poltronasDispo(poltronas);
    }
  } while (opcao != 4);
}