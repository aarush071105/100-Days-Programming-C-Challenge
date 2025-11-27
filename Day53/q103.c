// Write a program to find the pivot index in an array.
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int total = 0, leftSum = 0;

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    for (i = 0; i < n; i++) {
        if (leftSum == total - leftSum - arr[i]) {
            printf("%d\n", i);
            return 0;
        }
        leftSum += arr[i];
    }

    printf("-1\n");
    return 0;
}
