// Write a program to remove all vowels from a string.
#include <stdio.h>

int main() {
    char str[1000], result[1000];
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];
        char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

        if (!(lower == 'a' || lower == 'e' || lower == 'i' ||
              lower == 'o' || lower == 'u')) {
            result[j++] = ch;
        }

        i++;
    }

    result[j] = '\0';

    printf("String after removing vowels: %s\n", result);

    return 0;
}
