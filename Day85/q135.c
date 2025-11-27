// Assign explicit values starting from 10 and print them.

#include <stdio.h>

int main() {
    enum nums { A = 10, B, C, D };

    printf("%d %d %d %d\n", A, B, C, D);

    return 0;
}
