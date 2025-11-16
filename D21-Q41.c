Q41-Write a program to swap the first and last digit of a number.
Input 1:
1234
Output 1:
4231
Input 2:
1001
Output 2:
1001
  CODE-
  #include <stdio.h>
#include <math.h>

int main() {
    int num, temp, first, last, digits;

    scanf("%d", &num);

    temp = num;

    // find last digit
    last = temp % 10;

    // find first digit
    while (temp >= 10) {
        temp /= 10;
    }
    first = temp;

    // count digits
    digits = (int)log10(num);

    // remove first and last digits and rebuild number
    int middle = (num % (int)pow(10, digits)) / 10;

    int result = last * (int)pow(10, digits) + middle * 10 + first;

    printf("Swapped number: %d\n", result);

    return 0;
}
