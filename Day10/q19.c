//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter sides of triangle: \n");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b <= c || b + c <= a || c + a <= b) {
        printf("The Triangle with given sides is not possible ");
        return 0;
    }
    if (a == b && b == c)
    printf("It is Equilatral Traingle");
else if (a == b || b == c || a == c)
    printf("It is Isosceles Triangle");
else
    printf("It is Scalene Triangle");
return 0;

}