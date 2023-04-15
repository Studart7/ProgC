#include <stdio.h>

int main(  ){
    int escolha = 1;
    printf("Projeto de Software eh sua disciplina favorita? \n1.Sim \n2.Nao\n");

    while (escolha == 1){       
        scanf("%i", &escolha);
        printf("Projeto de Software eh sua disciplina favorita!\n");
        printf("Certeza? \n1.Sim \n2.Nao \n");       

    }
    return 0;
}