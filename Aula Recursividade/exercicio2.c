#include <stdio.h>

int potencia(int n){
    if (n <= 1){
        return 2;
    }
    else{
        return potencia(n-1) * 2;
    }
}

int main(){
    printf("%i", potencia(3));
    return 0;
}