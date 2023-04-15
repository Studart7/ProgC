#include <stdio.h>

int main(){

    int x, y, px, py;

    px = &x;
    py = &y;

    printf("%d\n",px);
    printf("%d\n",py);

    if (px > py){
        printf("px possui o maior endereco");
    }
    else{
        printf("py possui maior endereço");
    }

    return 0;
}