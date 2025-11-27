//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);
    if (num >= 0) {
        if (num == 0)
        printf(" It is zero \n");
    else 
        printf(" It is a positive number \n");
}
else {
    printf(" It is a negative number \n");
}
return 0;
}