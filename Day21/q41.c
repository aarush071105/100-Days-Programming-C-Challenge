// Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 10 && num > -10) {
        printf("After swapping: %d (single-digit number remains same)\n", num);
        return 0;
    }

    int n = (num < 0) ? -num : num;  

    lastDigit = n % 10;  

    digits = (int)log10(n);
    firstDigit = n / (int)pow(10, digits);

    
    swappedNum = (n % (int)pow(10, digits));  
    swappedNum = swappedNum / 10;             
    swappedNum = lastDigit * (int)pow(10, digits) + swappedNum * 10 + firstDigit;

    
    if (num < 0)
        swappedNum = -swappedNum;

    printf("After swapping first and last digits: %d\n", swappedNum);

    return 0;
}
