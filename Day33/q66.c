// Write a program to insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int n, elem, i, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &elem);

    pos = n;
    for (i = 0; i < n; i++) {
        if (elem < arr[i]) {
            pos = i;
            break;
        }
    }

    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = elem;

    printf("Array after insertion:\n");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
