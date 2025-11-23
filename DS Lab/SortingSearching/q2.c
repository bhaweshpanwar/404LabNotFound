#include <stdio.h>

void bubble_sort_even_indices()
{
    int n, i, j, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("Original array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    for (i = 0; i < n; i += 2)
    {
        for (j = i + 2; j < n; j += 2)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    printf("After sorting even indices: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    bubble_sort_even_indices();
    printf("\nBhawesh Panwar\n");
    return 0;
}