#include <stdio.h>

int main(){
    int num, maior = 0;
    while (1)
    {
        scanf("%i", &num);
        if (num == 0){
            break;
        }
        if (num > maior){
            maior = num;
        }
    }
    printf("%i", maior);
    
    return 0;
}