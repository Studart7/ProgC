#include <stdio.h>

int main() {
    int t1, t2, t3, t4, total;
    scanf("%i%i%i%i", &t1, &t2, &t3, &t4);
    total = (t1 + t2 + t3 + t4) - 3;
    printf("%i", total);
    return 0;
    
}