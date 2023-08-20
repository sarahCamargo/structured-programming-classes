#include <stdio.h>
#include <stdlib.h>

void calculaIMC(float *imc) {

    float altura = 0, peso = 0;

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);
    printf("\nDigite o peso em Kg: ");
    scanf("%f", &peso);

    *imc = (peso/(altura*altura));

}

void impressao(float *imc){
    printf("Valor IMC: %.2f ", *imc);

    if (*imc < 18.5){

    } else if (*imc >= 18.5 && *imc <= 24.9){
        printf("\nPeso Normal");
    } else if (*imc >= 25 && *imc <= 29.9) {
        printf("\nSobrepeso");
    } else if (*imc >= 30 && *imc <= 34.9) {
        printf("\nObesidade grau 1");
    } else if (*imc >= 35 && *imc <= 29.9) {
        printf("\nObesidade grau 2");
    } else if (*imc > 40){
        printf("\nObesidade grau 3");
    }

}



void menu () {
    printf("\n---------------------- CALCULO DE IMC ----------------------\n");
    printf("1 - CALCULAR IMC\n");
    printf("0 - ENCERRAR PROGRAMA");
    printf("\n------------------------------------------------------------\n");
}

int main()
{
    int opcao = 1;
    float resultadoIMC = 0;
    do {
        menu();
        printf("\nDigite uma opcao: ");
        scanf("%d", &opcao);
        if (opcao!=0){
            calculaIMC(&resultadoIMC);
            impressao(&resultadoIMC);
        }

    } while (opcao!=0);

}
