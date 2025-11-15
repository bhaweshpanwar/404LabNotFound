#include <stdio.h>

int main() {
    int m, n;
    int oddCount = 0, evenCount = 0;

    printf("Enter Matrix Dimensions (Row, Column): ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];

    printf("\nEnter Matrix Data:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("Enter element [%d,%d]: ", i, j);
            scanf("%d", &matrix[i][j]);

            if(matrix[i][j] % 2 == 0)
                evenCount++;
            else
                oddCount++;
        }
    }

    printf("\nYour Matrix is:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf(" %d", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nTotal Even Elements = %d\n", evenCount);
    printf("Total Odd Elements  = %d\n", oddCount);

    return 0;
}
