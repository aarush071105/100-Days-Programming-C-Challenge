// Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[1000];

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    // Remove trailing newline (if any)
    s[strcspn(s, "\n")] = '\0';

    int i;

    // Convert entire string to lowercase first
    for (i = 0; s[i] != '\0'; i++) {
        s[i] = tolower(s[i]);
    }

    // Capitalize first non-space character
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ') {
            s[i] = toupper(s[i]);
            break;
        }
    }

    printf("%s\n", s);

    return 0;
}
