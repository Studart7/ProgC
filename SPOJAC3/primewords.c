#include <stdio.h>
#include <ctype.h>

int troca_valores(char palavra[]){
    int total = 0, i;
    for (i = 0; palavra[i] != '\0'; i++) {
        if (tolower(palavra[i]) == palavra[i]){
            total += (palavra[i] - 96);
        }
        else{
            total += (palavra[i] - 38);
        }
    }

    return total;
}

int verifica_primo(int num){
    int i, cont = 0;
    for (i = 1; i <= num; i++){
        if ((num % i) == 0){
            cont++;
        }
    }

    if (cont == 2){
        return 1;
    }
    else if(cont == 1){
        return 1;
    }
    else{
        return 0;
    }
    
}


int main(){
    int teste;
    char palavra[20];

    while(scanf("%s", &palavra) != EOF){
        teste = verifica_primo(troca_valores(palavra));
        if (teste == 1){
            printf("It is a prime word.\n");
        }
        else{
            printf("It is not a prime word.\n");
        }
    }

}