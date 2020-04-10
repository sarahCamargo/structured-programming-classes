#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pizza {
    int codigoPizza;
    char nomePizza[40];
};

struct preco {
    int codigoPizza;
    float precoPizza;
};
void menu(){
    printf("\n\nDigite uma opcao: \n\n");
    printf("0 - Sair\n");
    printf("1 - Cadastro de Pizza\n");
    printf("2 - Cadastro de Preco\n");
    printf("3 - Pedido\n\n");
}

struct pizza dadosPizza(struct pizza a){
    printf("\nDigite o codigo da pizza:\n");
    scanf("%d", &a.codigoPizza);
    printf("\nDigite o nome da pizza:\n");
    scanf(" %s", a.nomePizza);
    return a;
}

struct preco dadosPreco(struct preco b){
    printf("\nDigite o codigo da pizza:\n");
    scanf("%d", &b.codigoPizza);
    printf("\nDigite o preco da pizza:\n");
    scanf("%f", &b.precoPizza);
    return b;
}

void pedido(char nP[], int qt, struct preco pre[], struct pizza piz[]){
    int i, y;
    float total;
    for (i = 0; i<2; i++){
        if (strcmp(nP, piz[i].nomePizza) == 0){
           for (y = 0; y<2; y++){
               if (pre[y].codigoPizza == piz[i].codigoPizza){
                   total = pre[y].precoPizza * qt;
                   printf("\n\nResumo Pedido:\n\n");
                   printf("Pizza: %s\n", piz[i].nomePizza);
                   printf("Quantidade: %d\n", qt);
                   printf("Valor total: %.2f\n", total);
               }
           } 
        }
    }
}

int main(){
    struct preco precos[2];
    struct pizza pizzas[2];
    struct pizza pizzaAux;
    struct preco precoAux;
    int op, aux1 = 0, aux2 = 0, qntd;
    char limite, nomePizza[40];


    do{
        menu();
        scanf("%d", &op);
        
        switch (op) {
        case 1:
            if (aux1 < 2){
                pizzas[aux1] = dadosPizza(pizzaAux);
                aux1++;
            } else {
                printf("\nEh permitido apenas 2 pizzas cadastradas por sessao. Deseja limpar o cadastro de pizzas? S/N\n");
                scanf(" %c", &limite);
                if ((limite == 'S') || (limite == 's')){
                    aux1 = 0;
                }
            }
            break;
        case 2:
            if (aux2 < 2){
                precos[aux2] = dadosPreco(precoAux);
                aux2++;
            } else {
                printf("\nEh permitido apenas 2 precos cadastrados por sessao. Deseja limpar o cadastro de precos? S/N\n");
                scanf(" %c", &limite);
                if ((limite == 'S') || (limite == 's')){
                    aux2 = 0;
                }
            }
            break;
        case 3:
            printf("\nRealizacao de Pedido\n\n");
            printf("Digite o nome da pizza:\n");
            scanf(" %s", nomePizza);
            printf("Digite a quantidade de pizzas requeridas:\n");
            scanf("%d", &qntd);
            pedido(nomePizza, qntd, precos, pizzas);
            break;
        case 0:
            break;
        default:
            printf("\n\nOpcao Invalida!\n");
            break;
        }
    } while(op!=0);
    return 0;
}