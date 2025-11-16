Q42-Write a program to check if a number is a perfect number.
Input 1:
6
Output 1:
Perfect number
Input 2:
10
Output 2:
Not perfect number
CODE-
  #include <stdio.h>

int main() {
    int num, sum = 0;

    scanf("%d", &num);

    if (num <= 0) {
        printf("Not a perfect number\n");
        return 0;
    }

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }

    if (sum == num)
        printf("Perfect number\n");
    else
        printf("Not a perfect number\n");

    return 0;
}
