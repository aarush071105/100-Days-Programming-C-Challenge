// Write a program to take a string s as input.
// The task is to find the length of the longest substring without repeating characters.
// Print the length as output.

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int i, j, maxLen = 0;

    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);

    for (i = 0; i < n; i++) {
        int freq[256] = {0};
        int length = 0;

        for (j = i; j < n; j++) {
            if (freq[(unsigned char)s[j]] == 1)
                break;

            freq[(unsigned char)s[j]] = 1;
            length++;
        }

        if (length > maxLen)
            maxLen = length;
    }

    printf("%d\n", maxLen);

    return 0;
}
