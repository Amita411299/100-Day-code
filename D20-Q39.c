Q39-Write a program to find the product of odd digits of a number.
Input 1:
12345
Output 1:
15 (1*3*5)
Input 2:
2468
Output 2:
1 (no odd digits, assume 1)
CODE-
  #include <stdio.h>

int main() {
    int num, digit, product = 1;
    int found = 0;

    scanf("%d", &num);

    if (num < 0) num = -num;  // handle negative numbers

    while (num > 0) {
        digit = num % 10;
        if (digit % 2 == 1) {
            product *= digit;
            found = 1;
        }
        num /= 10;
    }

    if (!found)
        product = 0;

    printf("Product of odd digits: %d\n", product);
    return 0;
}
