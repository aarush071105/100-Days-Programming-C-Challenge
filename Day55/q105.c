// Write a program to find the majority element in an array.
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int candidate = nums[0], count = 1;

    for (i = 1; i < n; i++) {
        if (nums[i] == candidate)
            count++;
        else
            count--;

        if (count == 0) {
            candidate = nums[i];
            count = 1;
        }
    }

    count = 0;
    for (i = 0; i < n; i++) {
        if (nums[i] == candidate)
            count++;
    }

    if (count > n / 2)
        printf("%d\n", candidate);
    else
        printf("-1\n");

    return 0;
}
