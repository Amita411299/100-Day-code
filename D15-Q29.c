Q29-Write a program to calculate the factorial of a number.
  Input 1:
5
Output 1:
120
Input 2:
3
Output 2:
6
  CODE-
  #include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;  // factorial grows very fast

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0) {
        printf("Factorial of a negative number does not exist.\n");
        return 0;
    }

    for(i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("Factorial of %d is: %lld\n", n, factorial);

    return 0;
}
