// Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>

int main() {
    enum menu { ADD = 1, SUBTRACT, MULTIPLY };
    enum menu choice;
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter choice (1-ADD, 2-SUBTRACT, 3-MULTIPLY): ");
    scanf("%d", &choice);

    switch (choice) {
        case ADD: 
            printf("Result: %d\n", a + b);
            break;
        case SUBTRACT: 
            printf("Result: %d\n", a - b);
            break;
        case MULTIPLY: 
            printf("Result: %d\n", a * b);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
