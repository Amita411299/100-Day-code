Q30-Write a program to reverse a given number.

Input 1:
1234
Output 1:
4321
Input 2:
100
Output 2:
1
CODE-
  #include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;          // get last digit
        reversed = reversed * 10 + remainder;  // build reversed number
        num /= 10;                     // remove last digit
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}
