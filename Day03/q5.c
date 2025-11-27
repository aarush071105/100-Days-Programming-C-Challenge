//Write a program to convert temperature from Celsius to Fahrenheit.


#include <stdio.h>
int main(){
    float celsius, fahrenheit;
    printf("Tempreature in celsius =");
    scanf("%f", &celsius);
    
    printf("Tempreature in fahrenheit = %.2f", (celsius * 9/5) + 32);
    return 0;
}