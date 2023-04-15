#include <stdio.h>

int main(){

    int x, y, px, py;

    scanf("%d", &x);
    scanf("%d", &y);

    px = &x;
    py = &y;

    printf("%d\n",px);
    printf("%d\n",py);

    if (px > py){
        printf("%d", px);
    }
    else{
        printf("%d", px);
    }

    return 0;
}