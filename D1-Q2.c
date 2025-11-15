Q2 Write a program to input two numbers and display their sum, difference, product, and quotient.
  Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5
Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

CODE-
  #include <stdio.h>

int main() {
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Sum = %.2f\n", a + b);
    printf("Difference = %.2f\n", a - b);
    printf("Product = %.2f\n", a * b);

    if (b != 0) {
        printf("Quotient = %.2f\n", a / b);
    } else {
        printf("Quotient = Undefined (division by zero not allowed)\n");
    }

    return 0;
}

  
