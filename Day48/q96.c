// Write a program to reverse each word in a sentence without changing the word order.
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, start = 0, end = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] != ' ') {
            start = i;
            while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
                i++;
            }
            end = i - 1;

            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
        } else {
            i++;
        }
    }

    printf("Modified sentence: %s\n", str);

    return 0;
}
