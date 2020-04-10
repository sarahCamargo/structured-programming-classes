#include <stdio.h>
#include <stdlib.h>

struct Pessoa                      // Cria uma STRUCT para armazenar os dados de uma pessoa
{
   float Peso;                        // define o campo Peso
   int Idade;                         // define o campo Idade
   float Altura;                      // define o campo Altura
};

void ImprimePessoa(struct Pessoa umaPessoa)       // --> declara o parâmetro da função como uma struct
{
   printf ("\n\nIdade: %d Peso: %f Altura: %f\n", umaPessoa.Idade, umaPessoa.Peso, umaPessoa.Altura );
}

struct Pessoa BuscaPessoa()
{
   struct Pessoa aPessoa;


   aPessoa.Idade = 15;
   aPessoa.Peso = 60.5;
   aPessoa.Altura = 1.75;


   return aPessoa;                // --> retorna a struct contendo os dados informados
}

int main()
{

   struct Pessoa Joao;
   struct Pessoa Povo[10];      // --> cria um vetor de 10 pessoas.

   Joao = BuscaPessoa();      //  --> atribui o retorno da função a uma variável struct
   ImprimePessoa(Joao);       //  --> passando a pessoa como parâmetro para impressão

   Joao.Idade = 22;                 //  --> Alterando a idade da pessoa;
   Povo[1] = Joao;                  //  --> Atribuindo a pessoa a uma pessoa do vetor
   ImprimePessoa(Povo[1]);  

   return 0;
}