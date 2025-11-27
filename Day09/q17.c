//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>
int main() {
double a, b, c;
double dicriminant, root1, root2, realpart, imgpart;
printf("Enter Coefficient a, b, c: ");
scanf("%lf %lf %lf", &a, &b, &c);
if (a == 0) {
    printf("This is not a quadratic equation \n");
    return 0;
}
dicriminant = b * b - 4* a * c;
if (dicriminant > 0) {
    root1 = (-b + sqrt(dicriminant)) /(2 * a);
    root2 = (-b - sqrt(dicriminant)) /(2 * a);
    printf("--Root are real and distinct--\n");
    printf("Root1 = %.2lf\nRoot2 = %.2lf", root1, root2);
}
else if (dicriminant == 0) {
    root1 = root2 = -b / (2 * a);
    printf("--Root are real and equal--\n");
    printf("Root1 = Root2 = %.2lf\n", root1);
}
else{
    realpart = -b / (2 * a);
    imgpart = sqrt(-dicriminant) /(2 * a);
        printf("--Roots are complex and conjugate.--\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realpart, imgpart);
        printf("Root 2 = %.2lf - %.2lfi\n", realpart, imgpart);
}
return 0;
}