#include <stdio.h>
#include <stdlib.h>

typedef struct reg_no {
    float info;
    struct reg_no *prox;
    struct reg_no *ant;
} no;

typedef struct reg_lista {
    struct reg_no *inicio;
    struct reg_no *fim;
    int quantidade;
} lista;

no *cria_no(float valor) {
    no *novo_no = (no *) malloc(sizeof(no));
    novo_no->info = valor;
    novo_no->prox = NULL;
    novo_no->ant = NULL;
    return novo_no;
}

void insere_no_fim(lista *lista, float valor) {
    no *novo_no = cria_no(valor);
    if (lista->inicio == NULL) {
        lista->inicio = novo_no;
        lista->fim = novo_no;
    } else {
        novo_no->ant = lista->fim;
        lista->fim->prox = novo_no;
        lista->fim = novo_no;
    }
    lista->quantidade++;
}

void insere_no_inicio(lista *lista, float valor) {
    no *novo_no = cria_no(valor);
    if (lista->inicio == NULL) {
        lista->inicio = novo_no;
        lista->fim = novo_no;
    } else {
        novo_no->prox = lista->inicio;
        lista->inicio->ant = novo_no;
        lista->inicio = novo_no;
    }
    lista->quantidade++;
}

void imprime_nos(lista *lista) {
    no *no_atual = lista->inicio;
    while (no_atual != NULL) {
        printf("%.2f ", no_atual->info);
        no_atual = no_atual->prox;
    }
}

void busca_no(lista *lista, float valor) {
    no *no_atual = lista->inicio;
    int verifica = 0;
    while (no_atual != NULL) {
        if (valor == no_atual->info){
            verifica = 1;
            break;
        }
        no_atual = no_atual->prox;
    }
    if (verifica == 1){
        printf("\nEsta na lista");
    } else{
        printf("\nNao esta na lista");
    }
}

void verifica_valor_na_posicao(lista *lista, int posicao) {
    no *no_atual = lista->inicio;
    int i = 0;
    while (no_atual != NULL && i < posicao) {
        no_atual = no_atual->prox;
        i++;
    }
    if (no_atual == NULL){
        printf("\nEssa posicao nao esta na lista.");
    }else{
        printf("\n%.2f", no_atual->info);
    }
}

void insere_no_posicao(lista *lista, float valor, int posicao) {
    if (posicao <= 0 || posicao > lista->quantidade + 1) {
        printf("\nPosicao invalida.");
        return;
    }

    if (posicao == 1) {
        insere_no_inicio(lista, valor);
        return;
    }

    if (posicao == lista->quantidade + 1) {
        insere_no_fim(lista, valor);
        return;
    }

    no *no_atual = lista->inicio;
    int i = 1;
    while (no_atual != NULL && i < posicao) {
        no_atual = no_atual->prox;
        i++;
    }
    no *novo_no = cria_no(valor);
    novo_no->ant = no_atual->ant;
    novo_no->prox = no_atual;
    no_atual->ant->prox = novo_no;
    no_atual->ant = novo_no;
    lista->quantidade++;
}

void remove_valor(lista *lista, float valor) {
    no *no_atual = lista->inicio;
    while (no_atual != NULL) {
        if (valor == no_atual->info){
            if (no_atual == lista->inicio) {
                lista->inicio = no_atual->prox;
                if (lista->inicio != NULL) {
                    lista->inicio->ant = NULL;
                }
            } else if (no_atual == lista->fim) {
                lista->fim = no_atual->ant;
                if (lista->fim != NULL) {
                    lista->fim->prox = NULL;
                }
            } else {
                no_atual->ant->prox = no_atual->prox;
                no_atual->prox->ant = no_atual->ant;
            }
            no *no_removido = no_atual;
            no_atual = no_atual->prox;
            free(no_removido);
            lista->quantidade--;
        } else {
            no_atual = no_atual->prox;
        }
    }
    
}

void imprime_nos_reverso(lista *lista) {
    no *no_atual = lista->fim;
    while (no_atual != NULL) {
        printf("%.2f ", no_atual->info);
        no_atual = no_atual->ant;
    }
}


int main() {
    lista minha_lista;
    minha_lista.inicio = NULL;
    minha_lista.fim = NULL;
    minha_lista.quantidade = 0;

    insere_no_fim(&minha_lista, 1.0);
    insere_no_fim(&minha_lista, 2.0);
    insere_no_fim(&minha_lista, 3.0);
    printf("\nValores da lista: ");
    imprime_nos(&minha_lista);

    insere_no_inicio(&minha_lista, 9.0);
    remove_valor(&minha_lista, 2.0);
    insere_no_fim(&minha_lista, 10.0);
    insere_no_fim(&minha_lista, 11.0);
    printf("\nValores da lista: ");
    imprime_nos(&minha_lista);
    
    remove_valor(&minha_lista, 10.0);
    printf("\nValores da lista: ");
    imprime_nos(&minha_lista);

    verifica_valor_na_posicao(&minha_lista, 3);

    insere_no_posicao(&minha_lista, 7.0, 3);
    printf("\nValores da lista: ");
    imprime_nos(&minha_lista);

    busca_no(&minha_lista, 3.0);
    busca_no(&minha_lista, 1.0);
    busca_no(&minha_lista, 10.0);

    printf("\nValores da lista reverso: ");
    imprime_nos_reverso(&minha_lista);
    
    return 0;
}
