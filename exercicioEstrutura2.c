#include <stdio.h>
#include <stdlib.h>

struct Parte {
  int comprimento;
  int largura;
  int area;
  char nome [20];
};

struct Parte IncluirParte() {
   struct Parte aParte;

   printf("\nDigite o comprimento: ");
   scanf("%d", &aParte.comprimento);
   printf("\nDigite a largura: ");
   scanf("%d", &aParte.largura);
   printf("\nDigite o nome da parte: ");
   scanf("%s", aParte.nome);
   aParte.area = aParte.largura * aParte.comprimento;
   return aParte;                
}

int CalculoTotal(int total, struct Parte bParte[]) {
  int areaTotal = 0;
  for (int i = 0; i<5; i++){
    areaTotal += bParte[i].area;
  }
  return areaTotal;                
}

void Imprime(struct Parte p[], int a)
{
  for (int i = 0; i<5; i++){
   printf ("\nNome: %s\n Area: %d", p[i].nome, p[i].area);
  }
  printf("\nArea Total do Imovel: %d", a);
}

int menu(){
  int opcao = 0;
  printf("\nEscolha uma opção abaixo:\n1.Incluir Parte\n2.Calcular Total\n0.Sair\n");
  scanf("%d", &opcao);
  return opcao;
}

int main() {
  int op = 0, aux = 0, areaTImovel = 0;
  struct Parte partes[5];
  struct Parte partesAux;
  do{
    op = menu();

    switch (op) {
      case 1:
        if (aux < 5){
          partes[aux] = IncluirParte();
          aux ++;
        } else {
          printf("\n\nO limite de partes do vetor foi atingido\n");
        }
        break;
      case 2:
        areaTImovel = CalculoTotal(areaTImovel, partes);
        Imprime(partes, areaTImovel);
        break;
      case 0:
       return 0;
      default:
        printf("\nEssa opção não existe\n");
        break;
    }
  } while (op != 0);
  return 0;
}