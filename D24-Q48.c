Q48-Write a program to print the following pattern:
1
12
123
1234
12345
Input 1:
Output 1:
1
12
123
1234
12345
  CODE-
  #include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
