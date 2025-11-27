// Write a program to find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main() {
    char str[1000];
    int freq[26] = {0};
    int i = 0;
    char repeat = '\0';

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';
            freq[index]++;
            if (freq[index] == 2) {
                repeat = str[i];
                break;
            }
        }
        i++;
    }

    if (repeat != '\0')
        printf("First repeating lowercase alphabet = %c\n", repeat);
    else
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}
