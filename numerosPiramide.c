#include <stdio.h>

int main() {

  int numeroMax, meio;
  float aux = 1;
  printf("Digite um numero Maximo (impar):");
  scanf("%d", & numeroMax);
  meio = numeroMax / 2;
  for (int i = 0; i <= meio; i++) {
    if (aux > 1) {
      for (int g = 1; g < aux; g++) {
        printf(" ");
      }
    }
    for (int j = aux; j <= numeroMax; j++) {
      printf("%d", j);
    }
    aux++;
    numeroMax --;;
    printf("\n");
  }
}