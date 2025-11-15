Q9-Write a program to calculate simple and compound interest for given principal, rate, and time.
  Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5
Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76
  CODE-
  #include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, simpleInterest, compoundInterest;

    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Compound Interest
    compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    printf("\nSimple Interest = %.2f", simpleInterest);
    printf("\nCompound Interest = %.2f\n", compoundInterest);

    return 0;
}
