/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int sub1 , sub2;
  float average;

  printf ("Enter subject 1 mark : ");
  scanf("%d", &sub1);

  printf ("Enter subject 2 mark : ");
  scanf("%d", &sub2);

  average = (sub1 + sub2)/ 2.0;
  printf("Average mark : %.2f", average);

  return 0;
}

