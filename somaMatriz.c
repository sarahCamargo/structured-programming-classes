#include <stdio.h>

int main(){

	int matriz[3][3], numero, soma=0;

	printf("Digite um número inicial: ");
	scanf("%d", &numero);

	for(int i=0; i<3; i++){
		for (int z=0; z<3; z++){
			if(i==0 && z==0){
				matriz[i][z] = numero;
			} else{
				numero+=2;
				matriz[i][z] = numero;
			}	
		}
	}
	for(int i=0; i<3; i++){
		for (int z=0; z<3; z++){
			soma+= matriz[i][z];
			printf(" %d ",matriz[i][z] );
		}
		printf("\n");
	}
	printf("Soma dos numeros da matriz: %d\n", soma);
}