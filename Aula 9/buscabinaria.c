#include<stdio.h>

int main(){

    int lista[13] = {15,16,34,43,52,61,73,102,114,125,136,148,162};
    int pos = 6, valor_desejado = 15,posI = 0,posF = 12;

    while(1){
        if(lista[pos] == valor_desejado){
            printf("%i", pos);
            break;
        }
        else if(lista[pos] > valor_desejado){
            posF = pos - 1;
            pos = (posI + posF)/2;
        }
        else if(lista[pos] < valor_desejado){
            posI = pos + 1;
            pos = (posI + posF)/2;
        }
        if (posI > posF){
            printf("O valor %i não está na lista", valor_desejado);
            break;
        }

    }

    return 0;
}