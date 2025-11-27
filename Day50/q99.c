// Write a program to change the date format from dd/mm/yyyy to dd-Mon-yyyy.
#include <stdio.h>

int main() {
    char date[20], month[3];
    int d1, d2, y;

    printf("Enter date in dd/mm/yyyy format: ");
    fgets(date, sizeof(date), stdin);

    d1 = (date[0] - '0') * 10 + (date[1] - '0');
    d2 = (date[3] - '0') * 10 + (date[4] - '0');
    y  = (date[6] - '0') * 1000 + (date[7] - '0') * 100 +
         (date[8] - '0') * 10 + (date[9] - '0');

    char *months[] = {
        "Jan","Feb","Mar","Apr","May","Jun",
        "Jul","Aug","Sep","Oct","Nov","Dec"
    };

    printf("%02d-%s-%04d\n", d1, months[d2 - 1], y);

    return 0;
}
