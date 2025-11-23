#include<stdio.h>
void linear_search_min_max()
{
    int n, i, min, max;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    min = max = arr[0];
    
    for (i = 1; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    
    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);
}

int main()
{
    linear_search_min_max();
    printf("\nBhawesh Panwar\n");
    return 0;
}
