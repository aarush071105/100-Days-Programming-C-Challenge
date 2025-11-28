#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s;        
    struct Student *ptr;    

    ptr = &s; 
    printf("Enter name: ");
    scanf("%s", ptr->name);

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    printf("\n--- Student Details ---\n");
    printf("Name : %s\n", ptr->name);
    printf("Roll : %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
