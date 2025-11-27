// Write a program to find the pivot integer x for a given n.
#include <stdio.h>

int main() {
    int n, x;
    int leftSum, rightSum;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for (x = 1; x <= n; x++) {
        leftSum = x * (x + 1) / 2;
        rightSum = (n * (n + 1) / 2) - (x * (x - 1) / 2);

        if (leftSum == rightSum) {
            printf("%d\n", x);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}
