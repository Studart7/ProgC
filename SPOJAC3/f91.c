#include <stdio.h>

int f91(int N){
    if (N <= 100){
        return f91(f91(N+11));
    }
    else{
        return N - 10;
    }
}

int main(){
    int n;
    printf("Digite um numero de 1 a 1000000");
    scanf("%i", n);
    while (n =! 0){
        printf("%i", f91(n));
        scanf("%i", n);
    }

    return 0;
}