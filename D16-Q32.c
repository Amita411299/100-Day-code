Q32-Write a program to check if a number is a palindrome.
Input 1:
121
Output 1:
Palindrome
Input 2:
123
Output 2:
Not palindrome
CODE-
  #include <stdio.h>

int main() {
    int num, original, reversed = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // store original number

    while (num > 0) {
        digit = num % 10;            // get last digit
        reversed = reversed * 10 + digit; // build reversed number
        num = num / 10;              // remove last digit
    }

    if (original == reversed)
        printf("The number is a palindrome.");
    else
        printf("The number is not a palindrome.");

    return 0;
}
