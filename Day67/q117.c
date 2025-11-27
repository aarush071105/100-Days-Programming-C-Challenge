// Write a program to take two sorted arrays of size m and n as input.
// Merge both the arrays such that the merged array is also sorted.
// Print the merged array.

#include <stdio.h>

int main() {
    int m, n, i, j, k;

    printf("Enter size of first array (m): ");
    scanf("%d", &m);

    int arr1[m];
    printf("Enter %d sorted elements:\n", m);
    for (i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array (n): ");
    scanf("%d", &n);

    int arr2[n];
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[m + n];
    i = 0;
    j = 0;
    k = 0;

    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while (i < m) {
        merged[k++] = arr1[i++];
    }

    while (j < n) {
        merged[k++] = arr2[j++];
    }

    for (i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }

    printf("\n");
    return 0;
}
