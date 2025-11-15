#include <stdio.h>

int main() {
    int m1, n1, m2, n2;

    printf("Enter dimensions of first matrix (rows columns): ");
    scanf("%d %d", &m1, &n1);

    printf("Enter dimensions of second matrix (rows columns): ");
    scanf("%d %d", &m2, &n2);

    if(m1 != m2 || n1 != n2) {
        printf("\nMatrices cannot be subtracted because dimensions are not equal.\n");
        return 0;
    }

    int matrix1[m1][n1], matrix2[m2][n2], subtract[m1][n1];

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
        for(int j = 0; j < n1; j++) {
            subtract[i][j] = matrix1[i][j] - matrix2[i][j];
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

    printf("\nSubtraction Matrix (Matrix1 - Matrix2):\n");
    for(int i = 0; i < m1; i++) {
        for(int j = 0; j < n1; j++) {
            printf(" %d", subtract[i][j]);
        }
        printf("\n");
    }

    return 0;
}
