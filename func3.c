#include <stdio.h>
#include <stdlib.h>

int sorteio(){
  int n = (rand() %10)+1;
  return n;
}
int main(void) {
  int n1=0, n2=0, n3=0, n4=0, n5=0, n6=0, n7=0, n8=0, n9=0, n10=0, r;

  for (int i = 0; i<100; i++){
    r = sorteio();
    switch(r){
      case 1:
        n1++;
        break;
      case 2:
        n2++;
        break;
      case 3:
        n3++;
        break;
      case 4:
        n4++;
        break;
      case 5:
        n5++;
        break;
      case 6:
        n6++;
        break;
      case 7:
        n7++;
        break;
      case 8:
        n8++;
        break;
      case 9:
        n9++;
        break;
      case 10:
        n10++;
        break;
    }
  }
  printf("01 - %d vezes\n02 - %d vezes\n03 - %d vezes\n04 - %d vezes\n05 - %d vezes\n06 - %d vezes\n07 - %d vezes\n08 - %d vezes\n09 - %d vezes\n10 - %d vezes\n",n1, n2, n3, n4, n5, n6, n7, n8, n9, n10);
}