// Write a program to find the longest word in a sentence.
#include <stdio.h>

int main() {
    char str[1000], longest[1000], current[1000];
    int i = 0, l = 0, c = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] != ' ') {
            current[c++] = str[i];
        } else {
            current[c] = '\0';
            if (c > l) {
                l = c;
                for (int k = 0; k <= c; k++) longest[k] = current[k];
            }
            c = 0;
        }
        i++;
    }

    current[c] = '\0';
    if (c > l) {
        for (int k = 0; k <= c; k++) longest[k] = current[k];
    }

    printf("Longest word: %s\n", longest);

    return 0;
}
