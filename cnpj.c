#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int cnpj[18];
    for (int i = 0; i < 18; i++) {
    	if (i == 2 || i == 6) {
        	printf(".");
      	} else
      	if (i == 10) {
       		printf("/");
      	} else
      	if (i == 15) {
          	printf("-");
      	} else {
          	cnpj[i] = rand() % 9;
          	printf("%d", cnpj[i]);
      	}
    }
}