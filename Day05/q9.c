//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
float main() {
float principal, rate, time;
float simple_intrest, compound_intrest;

printf("Enter Principal amount:");
scanf("%f", &principal);
printf("Enter Rate of intrest (in %%):");
scanf("%f", &rate);
printf("Enter Time (in year):");
scanf("%f", &time);

simple_intrest = (principal * rate * time) / 100;
compound_intrest = principal * pow((1 + rate / 100), time) - principal;
printf("Simple Intrest = %.2f\n", simple_intrest);
printf("Compound Intrest = %.2f\n", compound_intrest);
return 0;
}