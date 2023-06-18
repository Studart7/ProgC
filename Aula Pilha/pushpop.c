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

no *push(no *lista, float valor) {
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

no *pop(no *lista) {
    if (lista == NULL) {
        return NULL;  // Se a lista estiver vazia, retorna NULL
    }

    if (lista->prox == NULL) {
        free(lista);   // Se a lista tiver apenas um nó, libera a memória e retorna NULL
        return NULL;
    }

    no *no_atual = lista;
    while (no_atual->prox->prox != NULL) {
        no_atual = no_atual->prox;
    }
    
    free(no_atual->prox);  // Libera o último nó da lista
    no_atual->prox = NULL; // Define o próximo do penúltimo nó como NULL

    return lista;
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

    lista = push(lista, 1.0);
    lista = push(lista, 2.0);
    lista = push(lista, 3.0);
    lista = push(lista, 4.0);
    lista = pop(lista);

    
    imprime_nos(lista);
    
    return 0;
}