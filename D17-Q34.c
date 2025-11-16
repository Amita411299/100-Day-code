Q34-Write a program to check if a number is prime.
Input 1:
7
Output 1:
Prime
Input 2:
10
Output 2:
Not prime
CODE-
  #include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0; // 0 and 1 are not prime
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("The number is prime.");
    else
        printf("The number is not prime.");

    return 0;
}
