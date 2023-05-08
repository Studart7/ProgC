#include <stdio.h>

typedef char texto[255];
typedef unsigned int natural;

int main(){

    texto nome;
    natural idade;

    scanf("%[^\n]s", &nome);
    scanf("%u", &idade);

    printf("O nome eh: %s\n", nome);
    printf("A idade eh: %u\n", idade);

    return 0;
}
/*Materias a seguir:
Listas, pilhas, filas, algoritmos de ordenação, arvore*/