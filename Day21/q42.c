// Write a program to check if a number is a perfect number.
#include <stdio.h>

int main() {
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }

    
    if (sum == num)
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is not a Perfect Number.\n", num);

    return 0;
}
