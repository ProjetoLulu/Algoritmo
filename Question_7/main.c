#include <stdio.h>

int main() {

    int A, B, C;


    printf("Enter the value of A: ");
    scanf("%d", &A);
    
    printf("Enter the value of B: ");
    scanf("%d", &B); 

   
    if (A == B) {
      
        C = A + B;
    } else {
      
        C = A * B;
    }

  
    printf("The result is: %d\n", C);

    return 0;
}
