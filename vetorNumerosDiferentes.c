#include <stdio.h>

int main(){
	int numerosDiferentes[5];
	for (int i=0; i<5; i++){
		printf("Digite um número: ");
		scanf("%d", &numerosDiferentes[i]);
		for (int z=0; z<i; z++){
			if (numerosDiferentes[i] == numerosDiferentes[z]){
				while(numerosDiferentes[i] == numerosDiferentes[z]){
					printf("Esse número já existe, digite outro número: ");
					scanf("%d", &numerosDiferentes[i]);
				}
			}

		}
	}
	printf("Números digitados: ");
	for (int i=0; i<5; i++){
		printf("%d ", numerosDiferentes[i]);
	}

}
