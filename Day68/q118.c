// Write a program to take an input array of size n.
// The array should contain all the integers between 0 to n except for one.
// Print that missing number.

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int totalSum = n * (n + 1) / 2;
    int arraySum = 0;

    for (i = 0; i < n; i++) {
        arraySum += arr[i];
    }

    int missing = totalSum - arraySum;

    printf("%d\n", missing);

    return 0;
}
