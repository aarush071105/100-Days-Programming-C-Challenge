// Write a program to rotate an array to the right by k positions.
#include <stdio.h>

int main() {
    int n, k, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], temp[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (number of positions to rotate): ");
    scanf("%d", &k);

    k = k % n;

    for (i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    printf("Array after right rotation:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");

    return 0;
}
