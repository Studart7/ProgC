


// void libera_lista(no *lista) {
//     no *no_atual, *prox_no;
//     no_atual = lista;
//     while (no_atual != NULL) {
//         prox_no = no_atual->prox;
//         free(no_atual);
//         no_atual = prox_no;
//     }
// }

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

no *insere_no_fim(no *lista, float valor) {
    no *novo_no = cria_no(valor);
    if (lista == 0){
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

no *insere_no_inicio(no *lista, float valor){
    no *novo_no = cria_no(valor);

    novo_no->prox = lista;

    return novo_no;
}

void imprime_nos(no *lista) {
    no *no_atual;
    no_atual = lista;
    while (no_atual != NULL) {
        printf("%.2f ", no_atual->info);
        no_atual = no_atual->prox;
    }
}

void busca_no(no *lista, float valor) {
    no *no_atual;
    int verifica = 0;
    no_atual = lista;
    while (no_atual != NULL) {
        if (valor == no_atual->info){
            verifica = 1;
        }
        no_atual = no_atual->prox;
    }
    if (verifica == 1){
        printf("\nEsta na lista");
    } else{
        printf("\nNao esta na lista");
    }
}

void verifica_valor_na_posicao(no *lista, int posicao) {
    no *no_atual = lista;
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

no *insere_no_posicao(no *lista, float valor, int posicao) {
    no *no_atual = lista;
    int i = 0;
    while (no_atual != NULL && i < posicao) {
        no_atual = no_atual->prox;
        i++;
    }
    if (no_atual == NULL){
        printf("\nEssa posicao nao esta na lista.");
    }else{
        no_atual = cria_no(valor);
        no_atual->prox

    }
    
}

no *remove_valor(no *lista, float valor) {
    no *no_atual, *prox_no, *no_anterior = NULL;
    no_atual = lista;
    while (no_atual != NULL) {
        if (valor == no_atual->info){
            if (no_anterior == NULL){ 
                lista = no_atual->prox;
            } else {
                no_anterior->prox = no_atual->prox;
            }
            prox_no = no_atual->prox;
            free(no_atual);
            no_atual = prox_no; 
        } else {
            no_anterior = no_atual;
            no_atual = no_atual->prox;
        }
    }
    return lista;
}


void tamanho(no *lista) {
    int cont = 0;
    no *no_atual, *prox_no;
    no_atual = lista;
    while (no_atual != NULL) {
        cont++;
        prox_no = no_atual->prox;
        no_atual = prox_no;
    }

    printf("\nA lista tem %i elementos.", cont);
}

int main() {
    no *lista = NULL; 

    lista = insere_no_fim(lista, 1.0);
    lista = insere_no_fim(lista, 2.0);
    lista = insere_no_fim(lista, 3.0);
    lista = insere_no_inicio(lista, 9.0);
    lista = remove_valor(lista, 2.0);
    lista = insere_no_fim(lista, 10.0);
    lista = insere_no_fim(lista, 11.0);
    lista = remove_valor(lista, 10.0);

    verifica_valor_na_posicao(lista, 3);

    // imprime os valores da lista
    printf("\nValores da lista: ");
    imprime_nos(lista);

    tamanho(lista);

    busca_no(lista, 3.0);
    busca_no(lista, 1.0);
    busca_no(lista, 10.0);
    return 0;
}







