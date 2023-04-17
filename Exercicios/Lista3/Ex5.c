/*Ler duas strings s1 e s2 e uma posição p. Em seguida, inserir a string s2 na string s1 na posição p. 
Caso a posição p seja inválida, apresente uma mensagem de erro.  */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s1[100], s2[100];
    int p, i, pos2 = 0;

    scanf("%s %s %i", &s1, &s2, &p);
    for (i = p; s1[i] != '\0'; i++){
        s1[i] = s2[pos2];
        pos2++;

    }

    printf("%s", s1);


    return 0;
}