// Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fin, *fout;
    char ch;

    fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("input.txt not found\n");
        return 0;
    }

    fout = fopen("output.txt", "w");

    while ((ch = fgetc(fin)) != EOF) {
        if (ch >= 'a' && ch <= 'z')
            ch = ch - 32;
        fputc(ch, fout);
    }

    fclose(fin);
    fclose(fout);

    printf("Conversion complete. Check output.txt\n");

    return 0;
}
