#include <stdio.h>

int main (){
        int id;
        float grade1, grade2, grade3, average;
        char grade_letter;


  printf("Enter the student ID number: ");
  scanf("%d", &id);
  
  printf("Enter the fisrt grade (30%% weight): ");
  scanf("%f, &grade1");
  
  printf("Enter the second grade (30%% weight): ");
  scanf("%f, &grade2");

  printf("Enter the third grade (40%% weight): ");
  scanf("%f, grade3");

        average = (grade1 * 0.3) + (grade2 * 0.3) + (grade3 * 0.4);

  if (average >= 90) {
        grade_letter = 'A';

  } else if (average >= 75) {
        grade_letter = 'B';
  
  } else if (average >= 60) {
        grade_letter = 'C';

  } else if (average >= 40){
        grade_letter = 'D';

  } else {
        grade_letter = 'E';
  }

   printf("\nStudent ID: %d\n", id);
   printf("Average: %.2f\n", average);
   printf("Grade: %c\n", grade_letter);

  if (grade_letter == 'A' || grade_letter == 'B' || grade_letter == 'C') {
        printf("Result: Passed\n");
    } else {
        printf("Result: Failed\n");
    }

    return 0;
}

