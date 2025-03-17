// Your code here...
#include<stdio.h>

int main() {
    int rows, i, j, space;

    // Number of rows for the pyramid
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print stars using an if-else
        for (j = 1; j <= (2 * i - 1); j++) {
            if (j % 2 == 0) {
                printf(" "); // Optional: Add space between stars
            } else {
                printf("*");
            }
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
