#include <stdio.h>

int main(){
    int n = 0, a, b;
    do {
        n++;

        a = n * 700;
        b = 3 * (n * n);

    } while (a > b);

    printf("%i", n);

    return 0;
}