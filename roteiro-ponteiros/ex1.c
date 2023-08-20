#include <stdio.h>

//Exercício 1: Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char.
//Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros.
//Imprima os valores das variáveis antes e após a modificação.

int main(void) {

  int inteiro = 20;
  float real = 6.0;
  char character = 'A';

  int *p_inteiro;
  float *p_real;
  char *p_character;

  printf("Inteiro: %d\nReal: %.2f\nCharacter: %c", inteiro, real, character);

  p_inteiro = &inteiro;
  p_real = &real;
  p_character = &character;

 *p_inteiro = 5;
 *p_real = 5.55;
 *p_character = 'B';

  printf("\n\nDepois da modificacao:\nInteiro: %d\nReal: %.2f\nCharacter: %c", inteiro, real, character);





}
