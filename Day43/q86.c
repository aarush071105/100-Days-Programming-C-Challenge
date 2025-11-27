// Write a program to check if a string is a palindrome.
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, j, len = 0, palindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    i = 0;
    j = len - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            palindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (palindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
