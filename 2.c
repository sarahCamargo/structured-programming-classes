#include <stdio.h>

int main(void) {
  int n, n2, res=0, aux;

  scanf("%d", &n);
  scanf("%d", &n2);
  aux = n2;
  if (n2==0 || n==0){
    res = 0;
  }else if (n2<0 || n<0){
    do{
      res = res - n;
      aux--;
    }while(aux>0);
  }else{
    do{
      res= res + n;
      aux --;
  }while(aux>0);
  }
  printf("Produto: %d", res);
}