#include <stdio.h>
#include <String.h>

int main(){
    int i, j, pi;
    int matriz[3][3];

    int pnum = &matriz;
    printf("%d\n", matriz);

    for(i = 0; i <3; i++){
        for(j = 0; j <3; j++){
            pi = &matriz[i][j];
            printf("%d\n", pi);
        }
    }

    return 0;
}