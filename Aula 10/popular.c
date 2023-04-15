#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    while (n != 0) {
        int votos[n];
        int i, j;
        int max_votos = 0;

        for (i = 0; i < n; i++) {
            votos[i] = 0;
        

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                int voto;
                scanf("%d", &voto);
                if (voto == 1) {
                    votos[j]++;
                }
            }
        }

        for (i = 0; i < n; i++) {
            if (votos[i] > max_votos) {
                max_votos = votos[i];
            }
        }

        printf("%d\n", max_votos);
        scanf("%d", &n);
    }

    return 0;
}
}