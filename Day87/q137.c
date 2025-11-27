// Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>

int main() {
    enum role { ADMIN, USER, GUEST };
    enum role r;

    printf("Enter role (0-ADMIN, 1-USER, 2-GUEST): ");
    scanf("%d", &r);

    switch (r) {
        case ADMIN:
            printf("Welcome Admin! Full access granted.\n");
            break;
        case USER:
            printf("Welcome User! Limited access granted.\n");
            break;
        case GUEST:
            printf("Welcome Guest! View-only access granted.\n");
            break;
        default:
            printf("Invalid role\n");
    }

    return 0;
}
