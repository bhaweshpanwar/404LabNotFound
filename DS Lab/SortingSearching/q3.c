#include <stdio.h>
void bubble_sort_half_asc_desc()
{
    int n, i, j, temp, mid;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    mid = n / 2;
    for (i = 0; i < mid - 1; i++)
    {
        for (j = 0; j < mid - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (i = mid; i < n - 1; i++)
    {
        for (j = mid; j < n - (i - mid) - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted array (first half asc, second half desc): ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    bubble_sort_half_asc_desc();
    printf("\nBhawesh Panwar\n");
    return 0;
}
