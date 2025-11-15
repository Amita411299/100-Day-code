Q8-Write a program to find and display the sum of the first n natural numbers.
  Input 1:
5
Output 1:
Sum=15
Input 2:
10
Output 2:
Sum=55
  CODE-
  #include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}
