#include<stdio.h>

int main() {
    // Predefined matrix
    int m = 3, n = 4; 

    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    printf("Matrix of Size [%d,%d] successfully created.\n", m, n);

    printf("\nYour Matrix is :\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf(" %d", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of each column:\n");
    for(int j = 0; j < n; j++) {
        int sum = 0;
        for(int i = 0; i < m; i++) {
            sum += matrix[i][j];
        }
        printf("Column %d sum = %d\n", j+1, sum);
    }

    return 0;
}
