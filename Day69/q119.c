// Write a program to take an integer array as input.
// Only one element will be repeated.
// Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], freq[n + 1];

    for (i = 0; i <= n; i++) {
        freq[i] = 0;
    }

    printf("Enter %d elements:\n", n);
    int repeated = -1;

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (freq[arr[i]] == 1) {
            repeated = arr[i];
        }

        freq[arr[i]]++;
    }

    printf("%d\n", repeated);

    return 0;
}
