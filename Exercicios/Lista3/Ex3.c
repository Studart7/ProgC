/*Ler uma string e imprimir essa string em maiúsculo.  */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    int i;
    char str[100];
    scanf("%s", &str);

    for (i = 0; i<strlen(str); i++ ){
        str[i] = toupper(str[i]);
    }

    printf("%s", str);



    return 0;
}