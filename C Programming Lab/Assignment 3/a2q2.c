#include<stdio.h>

int main() {
	// Predefined Matrix
    int m = 3, n = 4; 

    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    printf("Matrix of Size [%d,%d] successfully created.\n", m, n);

    printf("\nMatrix is :\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf(" %d", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of each row:\n");
    for(int i = 0; i < m; i++) {
        int sum = 0;
        for(int j = 0; j < n; j++) {
            sum += matrix[i][j];
        }
        printf("Row %d sum = %d\n", i+1, sum);
    }

    return 0;
}
