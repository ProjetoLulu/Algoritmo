#include <stdio.h>

int main() {
    int num1, num2, num3, max, min;

    printf("Enter the first: ");
    scanf("%d", &num1);
    printf("Enter the second: ");
    scanf("%d", &num2);
    printf("Enter the third: ");
    scanf("%d", &num3);

 
    if (num1 >= num2 && num1 >= num3) {
        max = num1;
        if (num2 <= num3) {
            min = num2;
        } else {
            min = num3;
        }
    } else if (num2 >= num1 && num2 >= num3) {
        max = num2;
        if (num1 <= num3) {
            min = num1;
        } else {
            min = num3;
        }
    } else {
        max = num3;
        if (num1 <= num2) {
            min = num1;
        } else {
            min = num2;
        }
    }

    printf("The largest number is: %d\n", max);
    printf("The smallest number is: %d\n", min);

    return 0;
}