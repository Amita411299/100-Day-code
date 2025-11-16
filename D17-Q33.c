Q33-Write a program to check if a number is an Armstrong number.
Input 1:
153
Output 1:
Armstrong
Input 2:
123
Output 2:
Not Armstrong
CODE-
  #include <stdio.h>

int main() {
    int num, original, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // store original number

    while (num > 0) {
        digit = num % 10;      // extract last digit
        sum += digit * digit * digit; // cube and add
        num /= 10;             // remove last digit
    }

    if (sum == original)
        printf("The number is an Armstrong number.");
    else
        printf("The number is not an Armstrong number.");

    return 0;
}
