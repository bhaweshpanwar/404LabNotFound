#include <stdio.h>

int main() {
    int m, n;
    int sum = 0;
    float average;

    printf("Enter Matrix Dimensions (Row, Column): ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];

    printf("\nEnter Matrix Data:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("Enter element [%d,%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("\nYour Matrix is:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf(" %d", matrix[i][j]);
        }
        printf("\n");
    }

    average = (float)sum / (m * n);

    printf("\nSum of all elements = %d\n", sum);
    printf("Average of all elements = %.2f\n", average);

    return 0;
}
