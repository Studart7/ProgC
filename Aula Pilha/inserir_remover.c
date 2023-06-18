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

no *inserir(no *lista, float valor) {
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


no *remover(no *lista) {
    if (lista == NULL) {
        return NULL;  // Se a lista estiver vazia, retorna NULL
    }

    no *proximo_no = lista->prox;
    free(lista);  // Libera a memória do nó removido
    return proximo_no;
}

void imprime_nos(no *lista) {
    no *no_atual;
    no_atual = lista;
    while (no_atual != NULL) {
        printf("%.2f ", no_atual->info);
        no_atual = no_atual->prox;
    }
}



int main() {
    no *lista = NULL; 

    lista = inserir(lista, 1.0);
    lista = inserir(lista, 2.0);
    lista = inserir(lista, 3.0);
    lista = inserir(lista, 4.0);
    lista = remover(lista);

    
    imprime_nos(lista);
    
    return 0;
}


