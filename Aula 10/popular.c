#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    while (n != 0) {
        int votos[n];
        int i, j;
        int max_votos = 0;

        // Inicializa o vetor de votos
        for (i = 0; i < n; i++) {
            votos[i] = 0;
        }

        // Processa as cédulas de voto
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                int voto;
                scanf("%d", &voto);
                if (voto == 1) {
                    votos[j]++;
                }
            }
        }

        // Encontra o vencedor da eleição
        for (i = 0; i < n; i++) {
            if (votos[i] > max_votos) {
                max_votos = votos[i];
            }
        }

        // Imprime a quantidade de votos do vencedor
        printf("%d\n", max_votos);

        // Lê o próximo caso de teste
        scanf("%d", &n);
    }

    return 0;
}