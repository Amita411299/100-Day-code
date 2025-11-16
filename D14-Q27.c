Q27-Write a program to print the sum of the first n odd numbers.
Input 1:
3
Output 1:
9
Input 2:
5
Output 2:
25
CODE-
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    // Sum of first n odd numbers
    for(i = 1; i <= n; i++) {
        sum += (2 * i - 1);   // ith odd number = 2i - 1
    }

    printf("Sum of first %d odd numbers is: %d\n", n, sum);

    return 0;
}
