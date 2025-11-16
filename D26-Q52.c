Q52-
*

*
*
*

*
*
*
*
*

*
*
*

*

Input 1:
Output 1:
Pattern with stars spaced irregularly as shown.
CODE-
  #include <stdio.h>

int main() {
    int pattern[] = {1, 3, 5, 3, 1};
    int n = 5;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < pattern[i]; j++) {
            printf("*\n");
        }

        if (i != n - 1)
            printf("\n"); // blank line between blocks
    }

    return 0;
}
