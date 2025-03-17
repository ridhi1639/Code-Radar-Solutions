// Your code here...
#include<stdio.h>

int main() {
    int rows, i, j, space;

    // Number of rows for the pyramid
    
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

      
        for (j = 1; j <= (2 * i - 1); j++) {
            
            } if (j!%2!=0){
                printf("*");
            }
        }

        printf("\n");
    }

    return 0;
}
