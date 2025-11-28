#include <stdio.h>

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    int marks[n];
    char names[n][50];

    for (int i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", names[i]);

        printf("Enter marks of %s: ", names[i]);
        scanf("%d", &marks[i]);
    }

    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (marks[i] > marks[maxIndex]) {
            maxIndex = i;
        }
    }

    printf("\nStudent with highest marks:\n");
    printf("Name: %s\n", names[maxIndex]);
    printf("Marks: %d\n", marks[maxIndex]);

    return 0;
}
