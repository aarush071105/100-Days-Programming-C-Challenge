// Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int main() {
    int num1, num2, i, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

  
    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers only.\n");
        return 0;
    }

    int min = (num1 < num2) ? num1 : num2;

   
    for (i = 1; i <= min; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }

    printf("HCF (GCD) of %d and %d is: %d\n", num1, num2, hcf);

    return 0;
}
