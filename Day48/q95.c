// Write a program to check if one string is a rotation of another.
#include <stdio.h>

int main() {
    char str1[1000], str2[1000], concat[2000];
    int len1 = 0, len2 = 0, i = 0, j, found = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    while (str1[len1] != '\0' && str1[len1] != '\n') len1++;
    while (str2[len2] != '\0' && str2[len2] != '\n') len2++;

    if (len1 != len2) {
        printf("Not a rotation.\n");
        return 0;
    }

    for (i = 0; i < len1; i++) concat[i] = str1[i];
    for (i = 0; i < len1; i++) concat[len1 + i] = str1[i];
    concat[len1 * 2] = '\0';

    for (i = 0; i <= len1; i++) {
        for (j = 0; j < len2; j++) {
            if (concat[i + j] != str2[j]) break;
        }
        if (j == len2) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("One string is a rotation of the other.\n");
    else
        printf("Not a rotation.\n");

    return 0;
}
