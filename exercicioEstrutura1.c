#include <stdio.h>
#include <stdlib.h>

struct Pessoa {
  char nome[50];
  float peso;
  int idade;
  float altura;
};
struct Pessoa BuscaPessoa() {
   struct Pessoa aPessoa;

   printf("\nDigite o nome da pessoa: ");
   scanf("%s", aPessoa.nome);
   printf("\nDigite a idade da pessoa: ");
   scanf("%d", &aPessoa.idade);
   printf("\nDigite o peso da pessoa: ");
   scanf("%f", &aPessoa.peso);
   printf("\nDigite a altura da pessoa: ");
   scanf("%f", &aPessoa.altura);

   return aPessoa;                
}

void ImprimePessoa(struct Pessoa umaPessoa)
{
   printf ("\n\nNome: %s Idade: %d Peso: %f Altura: %f\n",umaPessoa.nome, umaPessoa.idade, umaPessoa.peso, umaPessoa.altura );
}
int menu(){
  int opcao = 0;
  printf("\nEscolha uma opção abaixo:\n1.Incluir Pessoas\n2.Visualizar Pessoas do Vetor\n3.Sair\n");
  scanf("%d", &opcao);
  return opcao;
}


int main() {
  int op = 0, aux = 0;
  struct Pessoa Pessoas[3];
  struct Pessoa pessoaAux;
  do{
    op = menu();

    switch (op) {
      case 1:
        if (aux < 3){
          Pessoas[aux] = BuscaPessoa();
          aux ++;
        } else {
          printf("\n\nO limite de pessoas do vetor foi atingido\n");
        }
        break;
      case 2:
        for (int i=0; i<aux;i++){
          pessoaAux = Pessoas[i];
          ImprimePessoa(pessoaAux);
        }
        break;
      case 3:
       return 0;
      default:
        printf("\nEssa opção não existe\n");
        break;
    }
  } while (op != 3);
  return 0;
}