//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
int main(){
    int lenght, breadth;
    printf("Enter lenght of Rectangle: \n", lenght);
    scanf("%d", &lenght);
    printf("Enter breadth of Rectangle: \n", breadth);
    scanf("%d", &breadth);
    printf("Area of Rectangle = %d\n", lenght * breadth);
    printf("Perimeter of rectangle = %d\n", 2 * (lenght + breadth));
    return 0;
}