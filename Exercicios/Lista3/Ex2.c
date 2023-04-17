//Ler uma string e imprimir o número de caracteres dessa string (não utilizar a função strlen).

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int i, contador = 0;
    char str[100];
    scanf("%s", str);

    for (i = 0; str[i] != '\0' && i < 100 ; i++){
        if (isalpha(str[i])){
            contador++;
        }
    }
    printf("A string tem %i caracteres", contador);

    return 0;
}

