//Write a program to display the month name and number of days using switch-case for a given month number
#include <stdio.h>
int main() {
    int month;
printf(" Enter Month (1 - 12): ");
scanf("%d", &month);
switch(month) {
    case 1:
    printf("January - 31 Days\n");
    break;
    case 2:
    printf("Febuary - 28 or 29 Days\n");
    break;
    case 3:
    printf("March - 31 Days\n");
    break;
    case 4:
    printf("April - 30 Days\n");
    break;
    case 5:
    printf("May - 31 Days\n");
    break;
    case 6:
    printf("June - 30 Days\n");
    break;
    case 7:
    printf("July - 31 Days\n");
    break;
    case 8:
    printf("August - 31 Days\n");
    break;
    case 9:
    printf("September - 30 Days\n");
    break;
    case 10:
    printf("October - 31 Days\n");
    break;
    case 11:
    printf("November - 30 Days\n");
    break;
    case 12:
    printf("December - 31 Days\n");
    break;
    default:
    printf("Invalid number (Enter Month number \n(Enter Number between 1 to 12)");
}
return 0;
}