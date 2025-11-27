// Write a program to reverse a string.
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, j, len = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    j = len - 1;
    i = 0;

    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    for (i = 0; i < len; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
