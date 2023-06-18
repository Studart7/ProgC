#include <stdio.h>
#include <string.h>

typedef struct reg_funcionario{
    char nome[150];
    int idade;
    char cpf[12];
    char data_nascimento[11];
    int codigo_setor;
    char cargo[30];
    int salario;
} Funcionario;

int main() {
    Funcionario funcionario;

    printf("Digite o nome: ");
    scanf("%s", funcionario.nome);

    printf("\nDigite o cargo: ");
    scanf("%s", funcionario.cargo);

    printf("\nDigite a idade: ");
    scanf("%d", &funcionario.idade);

    printf("\nDigite a data de nascimento (DD/MM/AAAA): ");
    scanf("%s", funcionario.data_nascimento);

    printf("\nDigite o codigo de setor (ate 99): ");
    scanf("%d", &funcionario.codigo_setor);

    printf("\nDigite o salario: ");
    scanf("%d", &funcionario.salario);

    printf("\nDigite o CPF: ");
    scanf("%s", funcionario.cpf);

    printf("\nDados do funcionario:");
    printf("\nNome: %s", funcionario.nome);
    printf("\nIdade: %d", funcionario.idade);
    printf("\nCPF: %s", funcionario.cpf);
    printf("\nData de Nascimento: %s", funcionario.data_nascimento);
    printf("\nCodigo do Setor: %d", funcionario.codigo_setor);
    printf("\nCargo: %s", funcionario.cargo);
    printf("\nSalario: %d", funcionario.salario);

    return 0;
}
