// Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly

#include <stdio.h>

int main() {
    enum status { SUCCESS, FAILURE, TIMEOUT };
    enum status s;

    printf("Enter status (0-SUCCESS, 1-FAILURE, 2-TIMEOUT): ");
    scanf("%d", &s);

    switch (s) {
        case SUCCESS: printf("Operation successful\n"); break;
        case FAILURE: printf("Operation failed\n"); break;
        case TIMEOUT: printf("Operation timed out\n"); break;
        default: printf("Invalid status\n");
    }

    return 0;
}
