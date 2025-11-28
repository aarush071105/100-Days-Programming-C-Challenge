#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee empWrite, empRead;
    FILE *fp;

    printf("Enter employee name: ");
    scanf("%s", empWrite.name);

    printf("Enter employee ID: ");
    scanf("%d", &empWrite.id);

    printf("Enter salary: ");
    scanf("%f", &empWrite.salary);

    fp = fopen("employee.dat", "wb");
    if (!fp) {
        printf("Error opening file.\n");
        return 1;
    }

    fwrite(&empWrite, sizeof(struct Employee), 1, fp);
    fclose(fp);

    fp = fopen("employee.dat", "rb"); 
    if (!fp) {
        printf("Error opening file.\n");
        return 1;
    }

    fread(&empRead, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\n--- Employee Data Read from File ---\n");
    printf("Name   : %s\n", empRead.name);
    printf("ID     : %d\n", empRead.id);
    printf("Salary : %.2f\n", empRead.salary);

    return 0;
}
