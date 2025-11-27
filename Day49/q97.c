// Write a program to print the initials of a name.
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    printf("Enter a full name: ");
    fgets(str, sizeof(str), stdin);

    if (str[0] != ' ' && str[0] != '\n')
        printf("%c", str[0]);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\n')
            printf("%c", str[i + 1]);
        i++;
    }

    printf("\n");
    return 0;
}
