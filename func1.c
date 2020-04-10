#include <stdio.h>

int maior(int v1, int v2){
  if (v1>v2){
    return v1;
  }else{
    return v2;
  }
}

int main(void) {
  int n1, n2, n3, n4, aux;
  printf("Digite 4 números:");
  scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

  aux = maior(n1, n2);
  aux = maior(aux, n3);
  aux = maior (aux, n4);

  printf("O maior número é: %d", aux);
  
}