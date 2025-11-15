#include <stdio.h>

int main() {
    int m1, n1, m2, n2;

    printf("Enter dimensions of first matrix (rows columns): ");
    scanf("%d %d", &m1, &n1);

    printf("Enter dimensions of second matrix (rows columns): ");
    scanf("%d %d", &m2, &n2);

    if(n1 != m2) {
        printf("\nMatrix multiplication not possible. Columns of first must equal rows of second.\n");
        return 0;
    }

    int matrix1[m1][n1], matrix2[m2][n2], product[m1][n2];

    printf("\nEnter elements of first matrix:\n");
    for(int i = 0; i < m1; i++) {
        for(int j = 0; j < n1; j++) {
            printf("Enter element [%d,%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\nEnter elements of second matrix:\n");
    for(int i = 0; i < m2; i++) {
        for(int j = 0; j < n2; j++) {
            printf("Enter element [%d,%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for(int i = 0; i < m1; i++) {
        for(int j = 0; j < n2; j++) {
            product[i][j] = 0;
        }
    }

    for(int i = 0; i < m1; i++) {
        for(int j = 0; j < n2; j++) {
            for(int k = 0; k < n1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("\nFirst Matrix:\n");
    for(int i = 0; i < m1; i++) {
        for(int j = 0; j < n1; j++) {
            printf(" %d", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\nSecond Matrix:\n");
    for(int i = 0; i < m2; i++) {
        for(int j = 0; j < n2; j++) {
            printf(" %d", matrix2[i][j]);
        }
        printf("\n");
    }

    printf("\nProduct Matrix:\n");
    for(int i = 0; i < m1; i++) {
        for(int j = 0; j < n2; j++) {
            printf(" %d", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
