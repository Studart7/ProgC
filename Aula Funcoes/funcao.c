#include <stdio.h>

//Procedimento é quando a "função" possui a sua finalidade em si
//Função é quando possui um retorno e pode ser reutilizado para um motivo maior no codigo principal
void teste(int a, int b){
    int soma = a + b;
    printf("%i", soma); //Esse caso seria um procedimento, mas não é a melhor escolha para esse caso
    //Aqui seria melhor ter um return da soma
}

int main(){
    teste(2, 3);
    return 0;
}

