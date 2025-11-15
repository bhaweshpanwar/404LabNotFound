#include<stdio.h>

int main() {
    // Predefined matrix
    int m = 4, n = 4;
    int matrix[4][4] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12},
        {13,14, 15, 16}
    };

    printf("Matrix of Size [%d,%d] successfully created.\n", m, n);

    printf("\nYour Matrix is :\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf(" %d", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nBoundary elements are:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(i == 0 || i == m-1 || j == 0 || j == n-1) {
                printf(" %d", matrix[i][j]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
