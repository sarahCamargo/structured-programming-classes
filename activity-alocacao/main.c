#include <stdio.h>
#include <stdlib.h>
/**
Criar um programa em linguagem C, do tipo console, para cadastrar as notas dos alunos
de uma turma do curso ADS.
Ao final, calcular e imprimir a nota média da turma, mostrando o total de alunos, a maior
e a menor nota.
*/

struct Alunos
{
    int matricula, nota;
};

void menu(){
    printf("\nEscolha uma opcao:\n");
    printf("1 - Adicionar Nota\n");
    printf("2 - Ver Alunos ja cadastrados\n");
    printf("0 - Encerrar Programa\n");
}
void adicionarAluno(struct Alunos *vetAlunos, int qntAlunos){
    printf("\nDigite a matricula do aluno: ");
    scanf("%d", vetAlunos[qntAlunos].matricula);
    printf("\nDigite a nota do aluno: ");
    scanf("%d", vetAlunos[qntAlunos].nota);
}

void imprimeAlunos(struct Alunos *vetAlunos, int qntAlunos){
    for (int i = 0; i < qntAlunos; i++){
        printf("Matricula: %d\n", vetAlunos[i].matricula);
        printf("Nota: %d\n\n", vetAlunos[i].nota);
    }

}

void media(struct Alunos *vetAlunos, int qntAlunos){
    float mediaturma = 0;
    for (int z = 0; z < qntAlunos; z++){
        mediaturma += vetAlunos[z].nota;
    }
    mediaturma = mediaturma/qntAlunos;

    printf("Media da turma eh: %.2f", mediaturma);
}
int main()
{
    struct Alunos *vetAlunos;
    int opcao = 0, qntAlunos = 0, qntAlunosVetor = 0;
    vetAlunos = (struct Alunos*) malloc(0 * sizeof(struct Alunos));

    do {
        menu();
        scanf("%d", &opcao);

        if (opcao == 1){
            qntAlunos++;
            vetAlunos = (struct Alunos*) realloc(vetAlunos, qntAlunos * sizeof(struct Alunos));
            adicionarAluno(vetAlunos, qntAlunosVetor);
            qntAlunosVetor ++;
        } else if (opcao == 2){

            imprimeAlunos(vetAlunos, qntAlunos);

        } else if (opcao == 0){
            media(vetAlunos, qntAlunos);
            return;

        } else {
            printf("Opcao Inexistente\n");
        }

    } while(opcao != 0);

}
