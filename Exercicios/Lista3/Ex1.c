//Ler uma string e imprimir a quantidade de vogais existentes.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, contador = 0;
    scanf("%s", str);

    for (i = 0; i < strlen(str); i++) {
        if ((str[i]) == 'a' || (str[i]) == 'e' || (str[i]) == 'i' || (str[i]) == 'o' || (str[i]) == 'u' || 
            (str[i]) == 'A' || (str[i]) == 'E' || (str[i]) == 'I' || (str[i]) == 'O' || (str[i]) == 'U') {
            contador++;
        }
    } 

    printf("A string tem %i vogais", contador);
    
    return 0;
}