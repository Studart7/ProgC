#include <stdio.h>

int main() {
    int instancia = 1, n, entrada[100], i, k;
    
    while (scanf("%d", &n) != EOF) {
        // lê os n inteiros da entrada e armazena em um array
        for (i = 0; i < n; i++) {
            scanf("%d", &entrada[i]);
        }
        
        // loop para percorrer o array em busca de um índice k
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
            // se encontrou um índice k que satisfaça a condição
            printf("Instancia %d\n%d\n\n", instancia, entrada[k]);
        } else {
            // se não encontrou um índice k que satisfaça a condição
            printf("Instancia %d\nnao achei\n\n", instancia);
        }
        
        instancia++;
    }
    
    return 0;
}
