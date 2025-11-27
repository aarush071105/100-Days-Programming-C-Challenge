//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main () {
    int a , b;
    printf("Enter a number: \n");
    scanf("%d", &a);
     printf("Enter a number: \n");
    scanf("%d", &b);
  printf("Sum of a & b = %d\n", a + b );
   printf("Subtraction of a & b = %d\n", a - b );
    printf("Multiplication of a & b = %d\n", a * b );
     printf("Division of a & b = %d\n", a / b );
 
    return 0;
}