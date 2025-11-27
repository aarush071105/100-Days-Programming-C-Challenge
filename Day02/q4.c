//Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
int main(){
    float radius;
    float pi = 3.14;
    printf("Radius of the circle = \n", radius);
    scanf("%f", &radius);
    printf("Area of the circle = %.2f\n", pi * radius * radius );
   
    return 0;
}