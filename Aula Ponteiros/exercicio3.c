#include <stdio.h>

int main(){
    int i, pi, pa;
    float array[10] = {1,2,3,4,5,6,7,8,9,10};
    pa = &array;
    print("%i", pa);
    for (i = 0; i<10; i++){
        pi = &array[i];
        printf("%d\n", pi);
    }

    

    return 0;
}