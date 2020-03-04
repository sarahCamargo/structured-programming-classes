#include <stdio.h>

int main() {

  float salario[2], salarioAnterior[2], salarioBruto[2], imposto[2], aumento[2], salarioLiquido[2];
  char trabalhador[3][40];

  for (int i = 0; i < 3; i++) {

    printf("Digite o nome do trabalhador:\n");
    scanf("%s", trabalhador[i]);

    printf("Digite o salário do trabalhador:\n");
    scanf("%f", & salario[i]);
    salarioAnterior[i] = salario[i];
    if (salarioAnterior[i] <= 1999.00) {
      aumento[i] = 0.1;
      salarioBruto[i] = salarioAnterior[i] + (salarioAnterior[i] * aumento[i]);
    } else {
      aumento[i] = 0.05;
      salarioBruto[i] = salarioAnterior[i] + (salarioAnterior[i] * aumento[i]);
    }

    printf("Digite o percentual de imposto de renda:\n");
    scanf("%f", & imposto[i]);

    salarioLiquido[i] = salarioBruto[i] - (salarioBruto[i] * (imposto[i] / 100));
  }
  for (int i = 0; i < 3; i++) {
    printf("\nNome: %s\nSalario anterior: R$ %.2f\nAumento: %.2f por cento\nSalário bruto atual: R$ %.2f\nSalario liquido atual: R$ %.2f\nImposto: %.2f por cento\n", trabalhador[i], salarioAnterior[i], aumento[i], salarioBruto[i], salarioLiquido[i], imposto[i]);
  }
} 