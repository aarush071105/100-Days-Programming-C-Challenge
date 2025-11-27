// Write a program to check if two strings are anagrams of each other.
#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    int freq1[256] = {0}, freq2[256] = {0};
    int i = 0, anagram = 1;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    while (str1[i] != '\0' && str1[i] != '\n') {
        freq1[(unsigned char)str1[i]]++;
        i++;
    }

    i = 0;
    while (str2[i] != '\0' && str2[i] != '\n') {
        freq2[(unsigned char)str2[i]]++;
        i++;
    }

    for (i = 0; i < 256; i++) {
        if (freq1[i] != freq2[i]) {
            anagram = 0;
            break;
        }
    }

    if (anagram)
        printf("The strings are anagrams.\n");
    else
        printf("The strings are not anagrams.\n");

    return 0;
}
