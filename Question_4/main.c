#include <stdio.h>

int main() {

    int code;
    float wage, new_wage, Rise;


    printf("Enter the employee's current salary: ");
    scanf("%f", &wage);

    printf("Enter the employee's job code: ");
    scanf("%d", &code);


    if (code == 310) {
            Rise = 0.05; // 5% de aumento
    }

    else if (code == 456) {
            Rise = 0.075; // 7,5% de aumento
    }
    else if (code == 885) {
            Rise = 0.10; // 10% de aumento
    }
    else {
            Rise = 0.15; // 15% de aumento para códigos não listados
    }

    new_wage = wage + (wage * Rise);

    printf("wage old: %.2f\n", wage);
    printf("New wage: %2f\n", new_wage);
    printf("Difference: %2.f\n", new_wage - wage);

        return 0;

}
