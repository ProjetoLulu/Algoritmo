#include <stdio.h>
#include <math.h>

int main() {
   
    double a, b, c, delta, raiz1, raiz2;

   
    printf("Enter the value of A: ");
    scanf("%lf", &a); 

    printf("Enter the value of B: ");
    scanf("%lf", &b); 
    
    printf("Enter the value of C: ");
    scanf("%lf", &c); 

    if (a == 0) {
        printf("This is not a quadratic equation!\n");
        return 1; 
    }

   
    delta = b * b - 4 * a * c;

    
    if (delta > 0) {
        
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("The roots are: %.2f e %.2f\n", raiz1, raiz2);
    } else if (delta == 0) {
        
        raiz1 = -b / (2 * a);
        printf("The double roots is: %.2f\n", raiz1);
    } else {
      
        printf("The equation has no real roots.\n");
    }

    return 0; 
}
