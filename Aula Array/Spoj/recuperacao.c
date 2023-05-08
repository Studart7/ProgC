#include <stdio.h>

int main() {
    int instancia = 1, n, entrada[100], i, k;
    
    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; i++) {
            scanf("%d", &entrada[i]);
        }
        
        for (k = 0; k < n; k++) {
            int soma = 0;
            for (i = 0; i < k; i++) {
                soma += entrada[i];
            }
            if (soma == entrada[k]) {
                break;
            }
        }
        
        if (k < n) {
            printf("Instancia %d\n%d\n\n", instancia, entrada[k]);
        } else {
            printf("Instancia %d\nnao achei\n\n", instancia);
        }
        
        instancia++;
    }
    
    return 0;
}
