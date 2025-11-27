// Write a program to find the maximum sum of all subarrays of size k.
#include <stdio.h>

int main() {
    int n, k, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    int maxSum = -1000000000;

    for (i = 0; i <= n - k; i++) {
        int sum = 0;
        for (j = i; j < i + k; j++) {
            sum += arr[j];
        }
        if (sum > maxSum)
            maxSum = sum;
    }

    printf("%d\n", maxSum);

    return 0;
}
