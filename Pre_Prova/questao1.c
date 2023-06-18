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

no *maior_valor (no* lista){
    no *no_atual = lista;
    no *maior_no = lista;
    while (no_atual != NULL) {
        if (no_atual->info > maior_no->info) {
            maior_no = no_atual;
        }
        no_atual = no_atual->prox;
    }

    return maior_no;
}

no *menor_valor(no *lista) {
    if (lista == NULL) {
        printf("Lista vazia.\n");
        return NULL;
    }

    no *no_atual = lista;
    no *menor_no = lista;

    while (no_atual != NULL) {
        if (no_atual->info < menor_no->info) {
            menor_no = no_atual;
        }
        no_atual = no_atual->prox;
    }

    return menor_no;
}

void inverte_maior_menor(no *lista) {
    
    no *no_maior = maior_valor(lista);
    no *no_menor = menor_valor(lista);

    // Troca dos valores entre o maior e o menor
    float temp = no_maior->info;
    no_maior->info = no_menor->info;
    no_menor->info = temp;
}

void troca_primeiro_ultimo(no *lista) {
    no *no_atual = lista;
    while (no_atual->prox != NULL) {
        no_atual = no_atual->prox;
    }

    float temp = lista->info;
    lista->info = no_atual->info;
    no_atual->info = temp;
}

int main() {
    no *lista = NULL;

    lista = insere_no_fim(lista, 4.0);
    lista = insere_no_fim(lista, 6.0);
    lista = insere_no_fim(lista, 3.0);
    lista = insere_no_fim(lista, 1.0);
    lista = insere_no_fim(lista, 9.0);
    lista = insere_no_fim(lista, 5.0);

    imprime_nos(lista);
    printf("\n");

    no *no_maior = maior_valor(lista);
    printf("Maior valor: %.2f\n", no_maior->info);

    no *no_menor = menor_valor(lista);
    printf("Menor valor: %.2f\n", no_menor->info);

    inverte_maior_menor(lista);
    printf("Lista apos a inversao: ");
    imprime_nos(lista);
    printf("\n");

    troca_primeiro_ultimo(lista);
    printf("Lista apos a troca do primeiro com o ultimo valor: ");
    imprime_nos(lista);

    return 0;
}