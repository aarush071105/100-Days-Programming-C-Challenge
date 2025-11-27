// Show that enums store integers by printing assigned values.

#include <stdio.h>

int main() {
    enum test { A = 5, B = 10, C = 15 };

    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);

    return 0;
}
