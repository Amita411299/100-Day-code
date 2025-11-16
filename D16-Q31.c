Q31-Write a program to take a number as input and print its equivalent binary representation.
Input 1:
10
Output 1:
1010
Input 2:
7
Output 2:
111
  CODE-
  #include <stdio.h>

int main() {
    int n, binary[32], i = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Binary: 0");
        return 0;
    }

    while (n > 0) {
        binary[i] = n % 2;   // store remainder (bit)
        n = n / 2;           // divide by 2
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {  // print in reverse order
        printf("%d", binary[j]);
    }

    return 0;
}
