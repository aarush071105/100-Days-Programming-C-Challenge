// Write a program to search in a sorted array using binary search.
#include <stdio.h>

int main() {
    int n, key, low, high, mid, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            found = 1;
            break;
        } else if (key < arr[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    if (found)
        printf("%d found at position %d\n", key, mid + 1);
    else
        printf("%d not found in the array\n", key);

    return 0;
}
