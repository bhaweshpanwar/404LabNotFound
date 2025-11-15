#include<stdio.h>

int main() {
    int m, n;
    printf("Enter Matrix Dimensions (Row, Column): ");
    scanf("%d", &m);
    scanf("%d", &n);

    int matrix[m][n];

    printf("\nEnter Matrix Data:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("Enter element [%d,%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nYour Matrix is:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf(" %d", matrix[i][j]);
        }
        printf("\n");
    }

    int transpose[n][m];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("\nTranspose of the Matrix is:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf(" %d", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
