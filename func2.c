#include <stdio.h>
#include <string.h>

float media(float n1, float n2, float n3){
  float media_val =0;
  media_val = (n1+n2+n3)/3;
  return media_val;
}

char conceito(float m){
  char c;
  if ((m>=0) && (m<=4.9)){
    c = 'D';
  } else if ((m>=5) && (m<=6.9)) {
    c = 'C';
  } else if ((m>=7) && (m<=8.9)) {
    c = 'B';
  } else if ((m>=9) && (m<=10)) {
    c = 'A';
  } 
  return c;
}
int main(void) {
  float nota1, nota2, nota3, media_valor;
  char nome[50], con, opcao[10];
  do {
    printf("\nDigite o nome do aluno: ");
    scanf("%s", nome);
    printf("\nDigite as três notas do aluno: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    media_valor = media(nota1, nota2, nota3);
    con = conceito(media_valor);

    printf("\nO aluno %s tem média %.2f e conceito %c", nome, media_valor, con);
    printf("\nDeseja continuar? Digite 'Sim' ou 'Sair':");
    scanf("%s", opcao);
  } while (strcmp(opcao, "Sim") == 0);
  
}