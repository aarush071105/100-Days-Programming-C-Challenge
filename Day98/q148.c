#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int areIdentical(struct Student s1, struct Student s2) {
    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll == s2.roll &&
        s1.marks == s2.marks) {
        return 1;
    return 0;
}

int main() {
    struct Student s1, s2;

    printf("Enter name of student 1: ");
    scanf("%s", s1.name);

    printf("Enter roll of student 1: ");
    scanf("%d", &s1.roll);

    printf("Enter marks of student 1: ");
    scanf("%f", &s1.marks);

    printf("\nEnter name of student 2: ");
    scanf("%s", s2.name);

    printf("Enter roll of student 2: ");
    scanf("%d", &s2.roll);

    printf("Enter marks of student 2: ");
    scanf("%f", &s2.marks);

    if (areIdentical(s1, s2)) {
        printf("\nBoth structures are IDENTICAL.\n");
    } else {
        printf("\nStructures are NOT identical.\n");
    }

    return 0;
}
