#include <stdio.h>

int main(){
    int n, i, f;
    scanf("%i", &n);
    f = 0;
    if (n < 1){
        printf("O numero digitado deve ser maior que 1");
    }
    else{
    for (i = 1 ; i <= n ; i++){
        f = f + i;
        printf("%i \n", f);
    }
    }
    return 0;
}