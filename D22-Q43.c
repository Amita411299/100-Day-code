Q43-Write a program to check if a number is a strong number.
Input 1:
145
Output 1:
Strong number
Input 2:
123
Output 2:
Not strong number
CODE-
  #include <stdio.h>

int factorial(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main() {
    int num, temp, sum = 0;
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if (sum == num)
        printf("Strong number\n");
    else
        printf("Not a strong number\n");

    return 0;
}
