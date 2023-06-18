#include <stdio.h>

typedef struct {
    int agencia;
    int conta;
    int tipo;
    float valor;
} Correntista;

float calcular_soma_tipo1(Correntista correntistas[], int n) {
    float soma = 0;
    int i;
    for (i = 0; i < n; i++) {
        if (correntistas[i].tipo == 1) {
            soma += correntistas[i].valor;
        }
    }
    return soma;
}

float calcular_soma_tipo2(Correntista correntistas[], int n) {
    float soma = 0;
    int i;
    for (i = 0; i < n; i++) {
        if (correntistas[i].tipo == 2) {
            soma += correntistas[i].valor;
        }
    }
    return soma;
}

int main() {
    Correntista correntistas[20]; // Capacidade máxima de 20 correntistas
    int num_correntistas = 10; // Número de correntistas a serem cadastrados

    // Cadastro dos correntistas
    int i;
    for (i = 0; i < num_correntistas; i++) {
        printf("Correntista %d:\n", i + 1);
        printf("Agencia: ");
        scanf("%d", &correntistas[i].agencia);
        printf("Conta: ");
        scanf("%d", &correntistas[i].conta);
        printf("Tipo de Conta (1 ou 2): ");
        scanf("%d", &correntistas[i].tipo);
        printf("Valor em Conta: ");
        scanf("%f", &correntistas[i].valor);
        printf("\n");
    }

    // Cálculo da soma dos valores em contas do tipo 1
    float soma_tipo1 = calcular_soma_tipo1(correntistas, num_correntistas);

    // Cálculo da soma dos valores em contas do tipo 2
    float soma_tipo2 = calcular_soma_tipo2(correntistas, num_correntistas);

    // Impressão dos resultados
    printf("Soma dos valores em contas do tipo 1: %.2f\n", soma_tipo1);
    printf("Soma dos valores em contas do tipo 2: %.2f\n", soma_tipo2);

    return 0;
}
