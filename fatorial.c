#include <stdio.h>

int main(){
    int n, i;
    int fatorial = 1;
    printf("Insira um numero para receber o fatorial\n");
    scanf("%i", &n);
    for(i = 1; i <= n; i++){
        fatorial = fatorial * i;
    }
    
    printf("%i", fatorial);
    return 0;
}