#include <stdio.h>

int main() {
  int i = 0;
  float media = 0, numeros[10], numerosAcima[10];

  while (i < 10) {
    printf("Digite um numero\n");
    scanf("%f", & numeros[i]);
    media += numeros[i];
    i++;
  }
  media = media / 10;
  i = 0;
  while (i < 10) {
    if (numeros[i] > media) {
      numerosAcima[i] = numeros[i];
    }
    i++;
  }
  i = 0;
  printf("Números acima da média:\n");
  while (i < 10) {
    if (numerosAcima[i]) {
      printf("%.2f\n", numerosAcima[i]);
    }
    i++;
  }

}