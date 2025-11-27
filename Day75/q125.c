// Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[500];

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("File not found\n");
        return 0;
    }

    printf("Enter text to append: ");
    getchar(); 
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = '\0';

    fprintf(fp, "%s\n", text);

    fclose(fp);

    printf("Text appended successfully\n");

    return 0;
}
