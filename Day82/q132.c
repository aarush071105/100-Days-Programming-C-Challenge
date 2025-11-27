// Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

#include <stdio.h>

int main() {
    enum signal { RED, YELLOW, GREEN };
    enum signal light;

    printf("Enter signal (0-RED, 1-YELLOW, 2-GREEN): ");
    scanf("%d", &light);

    if (light == RED)
        printf("Stop\n");
    else if (light == YELLOW)
        printf("Wait\n");
    else if (light == GREEN)
        printf("Go\n");
    else
        printf("Invalid input\n");

    return 0;
}
