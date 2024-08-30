#include <stdio.h>

int main() {
    char np[50];
    int q;
    float pu, vt, vtd = 0.0;
    char op;

    printf("Sistema de controle de vendas diarias.\n");

    op = 's';

    while (op == 's') {
        printf("Digite o nome do produto: ");
        scanf(" %[^\n]", np);
        printf("Digite a quantidade vendida: ");
        scanf("%d", &q);
        printf("Digite o preco unitario: ");
        scanf("%f", &pu);

        vt = q * pu;

        printf("Produto: %s\n", np);
        printf("Valor total da venda: R$ %.2f\n\n", vt);

        vtd += vt;

        printf("Deseja registrar outra venda? (s/n): ");
        scanf(" %c", &op);
    }

    printf("\nValor total arrecadado no dia: R$ %.2f\n", vtd);

    return 0;
}
