#include<stdio.h>

int main() {
    int rows, i, j;

    // Input the number of rows for the pyramid

    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print spaces for alignment
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print stars to form the pyramid
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
