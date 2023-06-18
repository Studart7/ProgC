#include <stdio.h>
#include <stdlib.h>

typedef struct reg_no {
    int info;
    struct reg_no *prox;
} no;

no *cria_no(int valor) {
    no *novo_no = (no *) malloc(sizeof(no));
    novo_no->info = valor;
    novo_no->prox = NULL;
    return novo_no;
}

void imprime_nos(no *lista) {
    no *no_atual = lista;
    while (no_atual != NULL) {
        printf("%d ", no_atual->info);
        no_atual = no_atual->prox;
    }
}

no *insere_no_fim(no *lista, int valor) {
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

no *concatenar_listas(no *lista1, no *lista2) {
    no *lista_aux = NULL;
    no *no_atual1 = lista1;
    no *no_atual2 = lista2;

    while (no_atual1 != NULL && no_atual2 != NULL) {
        if (no_atual1->info <= no_atual2->info) {
            lista_aux = insere_no_fim(lista_aux, no_atual1->info);
            no_atual1 = no_atual1->prox;
        } else {
            lista_aux = insere_no_fim(lista_aux, no_atual2->info);
            no_atual2 = no_atual2->prox;
        }
    }

    while (no_atual1 != NULL) {
        lista_aux = insere_no_fim(lista_aux, no_atual1->info);
        no_atual1 = no_atual1->prox;
    }

    while (no_atual2 != NULL) {
        lista_aux = insere_no_fim(lista_aux, no_atual2->info);
        no_atual2 = no_atual2->prox;
    }

    return lista_aux;
}

void liberar_lista(no *lista) {
    no *atual = lista;
    while (atual != NULL) {
        no *proximo = atual->prox;
        free(atual);
        atual = proximo;
    }
}

int main() {
    no *lista1 = NULL;
    no *lista2 = NULL;
    no *lista_concatenada = NULL;

    int n1, n2, i, num;

    printf("Digite quantos numeros voce quer digitar para a primeira lista: ");
    scanf("%d", &n1);

    for (i = 1; i <= n1; i++) {
        printf("Numero [%d]: ", i);
        scanf("%d", &num);
        lista1 = insere_no_fim(lista1, num);
    }

    printf("\nDigite quantos numeros voce quer digitar para a segunda lista: ");
    scanf("%d", &n2);

    for (i = 1; i <= n2; i++) {
        printf("Numero [%d]: ", i);
        scanf("%d", &num);
        lista2 = insere_no_fim(lista2, num);
    }

    printf("\nLista 1: ");
    imprime_nos(lista1);

    printf("\nLista 2: ");
    imprime_nos(lista2);

    lista_concatenada = concatenar_listas(lista1, lista2);

    printf("\nLista concatenada: ");
    imprime_nos(lista_concatenada);

    liberar_lista(lista1);
    liberar_lista(lista2);
    liberar_lista(lista_concatenada);

    return 0;
}
