#include <stdio.h>

typedef struct reg_no {
    float info;
    struct reg_no *esq;
    struct reg_no *dir;
} no;

typedef no* no_raiz;


void inicializa(no_raiz * raiz){
  *raiz = NULL;
}

no_raiz cria_no(float valor) {
    no_raiz novo_no = (no_raiz) malloc(sizeof(no));
    novo_no->info = valor;
    novo_no->esq = NULL;
    novo_no->dir = NULL;
    return novo_no;
}

void cria_raiz(no_raiz * raiz, float valor){
    *raiz = cria_no(valor);
} 

no_raiz busca_valor(float valor, no_raiz raiz){
  if (raiz == NULL) return NULL;
  if (raiz->info == valor) return raiz;
  no_raiz aux = busca_valor(valor,raiz->esq);
  if (aux->info == valor) return aux;
  return busca_valor(valor,raiz->dir);
} 

int insere_filho(no_raiz raiz, float valor_filho, float valor_pai, char lado){
  no_raiz pai = busca_valor(valor_pai, raiz);
  if (pai == NULL) return 0;
  no_raiz novo = cria_no(valor_filho);
  if (lado == 'e'){
    novo->esq = pai->esq;
    pai->esq = novo;
  }else{
     novo->esq = pai->dir;
     pai->dir = novo;              
  }
  return 1;
}

void imprime_arvore(no_raiz raiz){
  if (raiz == NULL) return;
  printf("%f",raiz->info);
  printf("(");     
  imprime_arvore(raiz->esq);
  printf("|");
  imprime_arvore(raiz->dir);
  printf(")");     
}
    
int main(){
    no_raiz raiz;
    inicializa(&raiz);
    cria_raiz(&raiz,1);
    insere_filho(raiz,2,1,'e');
    insere_filho(raiz,3,2,'d');
    imprime_arvore(raiz);

    return 0;
}