// Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.

#include <stdio.h>

int main() {
    enum days { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

    enum days d;

    for (d = SUNDAY; d <= SATURDAY; d++) {
        printf("%d ", d);
    }

    printf("\n");

    return 0;
}
