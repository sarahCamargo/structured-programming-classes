#include <stdio.h>
#include <stdlib.h>

struct Pessoa {
  char nome[50];
  int idade;
  float media;
  float maiorNota;
  char conceito;
};

int menu(){
  int opcao = 0;
  printf("\n\nEscolha uma opcao abaixo:\n1.Incluir Pessoas\n2.Imprimir\n0.Sair\n\n");
  scanf("%d", &opcao);
  return opcao;
}

int maior(int v1, int v2){
  if (v1>v2){
    return v1;
  }else{
    return v2;
  }
}

float media(float n1, float n2, float n3){
    float media_val =0;
    media_val = (n1+n2+n3)/3;
    return media_val;
}

char conceito(float m){
  char c;
  if (m<=4.9){
    c = 'D';
  } else if ((m>=5) && (m<=6.9)) {
    c = 'C';
  } else if ((m>=7) && (m<=8.9)) {
    c = 'B';
  } else if (m>=9) {
    c = 'A';
  } 
  return c;
}
float verifica (float nota){

    while (nota >10 || nota<0){
        printf("\nNota invalida. Digite uma nota de 0 a 10: \n");
        scanf("%f", &nota);
    }

    return nota;
}

struct Pessoa buscarPessoas() {
    struct Pessoa aPessoa;
    float n1, n2, n3, aux = 0;

    printf("\nDigite o nome da pessoa: ");
    scanf("%s", aPessoa.nome);
    printf("\nDigite a idade da pessoa: ");
    scanf("%d", &aPessoa.idade);
    printf("\nDigite a primeira nota do aluno:\n");
    scanf("%f", &n1);
    n1 = verifica(n1);
    printf("\nDigite a segunda nota do aluno:\n");
    scanf("%f", &n2);
    n2 = verifica(n2);
    printf("\nDigite a terceira nota do aluno:\n");
    scanf("%f", &n3);
    n3 = verifica(n3);

    aux = maior(n1, n2);
    aux = maior(aux, n3);

    aPessoa.media = media(n1, n2, n3);
    aPessoa.maiorNota = aux;
    aPessoa.conceito = conceito(aPessoa.media);
    return aPessoa;                
}

void ImprimePessoa(struct Pessoa umaPessoa) {
   printf ("\n\nNome: %s Idade: %d Media: %.2f Maior Nota: %.2f Conceito: %c\n",umaPessoa.nome, umaPessoa.idade, umaPessoa.media, umaPessoa.maiorNota, umaPessoa.conceito);
}

int main() {
  int op = 0, aux = 0, y;
  struct Pessoa Pessoas[3];
  struct Pessoa pessoaAux;
  char limite;

  do{
    op = menu();

    switch (op) {
      case 1:
        if (aux < 3){
          Pessoas[aux] = buscarPessoas();
          aux ++;
        } else {
          printf("\n\nO limite de pessoas do vetor foi atingido\nDeseja adicionar novas pessoas? S/N\n");
          scanf(" %c", &limite);
          if ((limite == 'S') || (limite == 's')){
               aux = 0;
          }
        }
        break;
      case 2:
        for (y=0; y<aux; y++){
          pessoaAux = Pessoas[y];
          ImprimePessoa(pessoaAux);
        }
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