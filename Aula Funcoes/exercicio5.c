/*Crie um programa para manipular elementos em um array. Seu programa deve
ter funções específicas para inserir, remover e atualizar um valor em uma posição
específica do array, além de trocar valores de posições. As posições todas devem
ser informadas pelo usuário via prompt.*/
#include <stdio.h>

int inserir(int array[], int tamanho){
    int valor, posi, i;

    printf("Insira a posicao em que deseja inserir:\n");
    scanf("%i", &posi);
    printf("Agora insira o valor que deseja inserir:\n");
    scanf("%i", &valor);

    for (i = tamanho - 1; i >= posi; i--){
        array[i + 1] = array[i];
    }

    array[posi] = valor;

    return tamanho + 1;
}

int remover(int array[], int tamanho){
    int posi, i;

    printf("Insira a posicao em que deseja remover:\n");
    scanf("%i", &posi);

    for (i = posi; i < tamanho - 1; i++){
        array[i] = array[i+1];
    }

    return tamanho - 1;
}

void atualizar(int array[], int tamanho){
    int i, posi, valor;
    printf("Insira a posicao para ser atualizada:\n");
    scanf("%i", &posi);
    printf("Insira o valor para ser atualizado:\n");
    scanf("%i", &valor);
    array[posi] = valor;
}

void imprime(int array[], int tamanho){
    int i;
    for (i = 0; i < tamanho; i++){
        printf("%i, ", array[i]);
    }
    printf("\n");
}

int main(){
    int tamanho = 10;
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    tamanho = inserir(array, tamanho);
    imprime(array, tamanho);
    tamanho = remover(array, tamanho);
    imprime(array, tamanho);
    atualizar(array, tamanho);
    imprime(array, tamanho);

    return 0;
}
