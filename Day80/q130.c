// Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

#include <stdio.h>

int main() {
    FILE *fp;
    int n, i, roll;
    char name[100];
    float marks;

    fp = fopen("students.txt", "w");

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter name, roll number and marks: ");
        scanf("%s %d %f", name, &roll, &marks);
        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    printf("\nStudent Records:\n");

    while (fscanf(fp, "%s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s  Roll: %d  Marks: %.2f\n", name, roll, marks);
    }

    fclose(fp);

    return 0;
}
