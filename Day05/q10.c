//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main(){
    int second;
    int hour, minute, sec;

    printf("Enter Total Seconds: ");
    scanf("%d", &second);

    hour = second/3600;
    minute = (second % 3600)/ 60;
    sec = second % 60;

    printf("Time = %02d:%02d;%02d\n", hour, minute, sec);
    return 0;
}