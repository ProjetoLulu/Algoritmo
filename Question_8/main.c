#include <stdio.h>

int main() {
    float preco, valor_final;
    int condicao_pagamento;

    printf("Enter the product price: ");
    scanf("%f", &preco);

    printf("Choose the product price:\n");
    printf("1 - Cash or check (20%% discount)\n");
    printf("2 - credit card payment in full (5%% discount)\n");
    printf("3 - in two installments  (no interest)\n");
    printf("4 - in two installments (with 10%% interest)\n");
    printf("Enter the payment option code: ");
    scanf("%d", &condicao_pagamento);

    if (condicao_pagamento == 1) {
        // 20% de desconto para pagamento à vista em dinheiro ou cheque
        valor_final = preco * 0.80;

    } else if (condicao_pagamento == 2) {
        // 5% de desconto para pagamento à vista no cartão de crédito
        valor_final = preco * 0.95;

    } else if (condicao_pagamento == 3) {
        // Preço normal para pagamentos em duas vezes(sem juros)
        valor_final = preco;
        
    } else if (condicao_pagamento == 4) {
        valor_final = preco * 1.10;
    } else {

        // quando não há condições
        printf("Invalid payment option!\n");
        return 1;
    }

    printf("The final amount to be paid is: R$ %.2f\n", valor_final);

    return 0;
}