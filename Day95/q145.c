#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

struct Student getTopStudent(int n) {
    struct Student s, top;
    
    printf("Enter name of student 1: ");
    scanf("%s", top.name);
    printf("Enter marks of %s: ", top.name);
    scanf("%d", &top.marks);

    for (int i = 2; i <= n; i++) {
        printf("\nEnter name of student %d: ", i);
        scanf("%s", s.name);

        printf("Enter marks of %s: ", s.name);
        scanf("%d", &s.marks);

        if (s.marks > top.marks) {
            top = s;
        }
    }

    return top; 

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student topper = getTopStudent(n);

    printf("\nTop Student Details:\n");
    printf("Name : %s\n", topper.name);
    printf("Marks: %d\n", topper.marks);

    return 0;
}
