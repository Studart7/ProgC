#include <stdio.h>
#include <string.h>

typedef char texto[255];

typedef struct registro_pessoa {
    texto nome;
    texto cpf;
} Pessoa;


int main(){
    Pessoa pessoa;

    strcpy(pessoa.nome, "Talita Vieira Ribeiro");
    strcpy(pessoa.cpf, "199199199199");

    printf("Nome: %s\n", pessoa.nome);
    printf("CPF: %s", pessoa.cpf);

    return 0;
}