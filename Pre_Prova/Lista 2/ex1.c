#include <stdio.h>
#include <stdlib.h>

typedef struct reg_no {
    float info;
    struct reg_no *prox;
} no;

no *cria_no(float valor) {
    no *novo_no = (no *) malloc(sizeof(no));
    novo_no->info = valor;
    novo_no->prox = NULL;
    return novo_no;
}

void imprime_nos(no *lista) {
    no *no_atual = lista;
    while (no_atual != NULL) {
        printf("%.2f ", no_atual->info);
        no_atual = no_atual->prox;
    }
}

no *insere_no_fim(no *lista, float valor) {
    no *novo_no = cria_no(valor);
    if (lista == NULL) {
        lista = novo_no;
    } else {
        no *no_atual = lista;
        while (no_atual->prox != NULL) {
            no_atual = no_atual->prox;
        }
        no_atual->prox = novo_no;
    }
    return lista;
}

float soma_impares(no* lista){
    float soma = 0;
    no *no_atual = lista;
    while (no_atual != NULL) {
        int valor = (int) no_atual->info;
        if ((valor % 2) != 0){
            soma += no_atual->info;
        }
        no_atual = no_atual->prox;
    }
    return soma;
};

float soma_pares(no* lista){
    float soma = 0;
    no *no_atual = lista;
    while (no_atual != NULL) {
        int valor = (int) no_atual->info;
        if ((valor % 2) == 0){
            soma += no_atual->info;
        }
        no_atual = no_atual->prox;
    }
    return soma;
};

int main(){
    no *lista = NULL;
    int n,i;
    float num;
    printf("Diga quantos numeros voce quer digitar: ");
    scanf("%i", &n);
    for (i = 1; i <= n; i++){
        printf("Numero [%i]: ", i);
        scanf("%f", &num);
        lista = insere_no_fim(lista, num);
    }
    printf("\n");
    imprime_nos(lista);

    printf("\n%.2f", soma_impares(lista));
    printf("\n%.2f", soma_pares(lista));


    return 0;
}