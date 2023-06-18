#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    char endereco[200];
    char telefone[12];
} Pessoa;

int main() {
    Pessoa pessoas[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", pessoas[i].nome);

        printf("Endereco: ");
        scanf("%s", pessoas[i].endereco);

        printf("Telefone: ");
        scanf("%s", pessoas[i].telefone);
        printf("\n");
    }

    printf("\nIMPRIMINDO DADOS:\n");
    for (i = 0; i < 5; i++) {
        printf("\nPessoa %d:\n", i + 1);
        printf("Nome: %s \n", pessoas[i].nome);
        printf("Endereco: %s \n", pessoas[i].endereco);
        printf("Telefone: %s \n", pessoas[i].telefone);
    }
    

    return 0;
}
