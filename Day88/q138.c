// Print all enum names and integer values using a loop.

#include <stdio.h>

int main() {
    enum colors { RED, GREEN, BLUE, YELLOW, ORANGE };
    enum colors c;

    const char *names[] = { "RED", "GREEN", "BLUE", "YELLOW", "ORANGE" };

    for (c = RED; c <= ORANGE; c++) {
        printf("%s = %d\n", names[c], c);
    }

    return 0;
}
