#include<stdio.h>

int main() {
	int m,n;
	printf("Enter Matrix Dimensions(Row,Column) : ");
    scanf("%d", &m);
    scanf("%d", &n);

    int matrix[m][n];

    printf("\nMatrix of Size [%d,%d] successfully created.\n",m,n);

    printf("Enter Maxtrix Data:\n");
    for(int i = 0; i < m; i++) {
    	for(int j = 0; j < n; j++) {
    		printf("Enter %d%d element:", i,j);
    		scanf("%d", &matrix[i][j]);
    	}
    }

    printf("\nYour Matrix is :\n");
    for(int i = 0; i < m; i++) {
    	for(int j = 0; j < n; j++) {
    		printf(" %d", matrix[i][j]);
    	}
    	printf("\n");
    }
	return 0;
}