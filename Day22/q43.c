// Write a program to check if a number is a strong number.
#include <stdio.h>

int main() {
    int num, temp, digit, i;
    int sum = 0, fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    temp = num; 

    
    while (temp != 0) {
        digit = temp % 10;

       
        fact = 1;
        for (i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;   
        temp /= 10;   
    }

    if (sum == num)
        printf("%d is a Strong Number.\n", num);
    else
        printf("%d is not a Strong Number.\n", num);

    return 0;
}
