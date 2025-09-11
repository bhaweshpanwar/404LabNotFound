#include<stdio.h>

// 1. Write a C program to input and display elements of an array.
/*int main() {
    int arr[4];
    printf("Enter four elements of array :\n");
    for(int i=0;i<=3;i++){
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

   
    printf("Entered elements are :");
    for(int i=0;i<=3;i++){
        printf("%d ",arr[i]);
    }
}*/

// 2. Write a C program to find the sum of all array elements.
/*int main() {
    int arr[] = {34,54,33,78};
    int sum = 0;
    for(int i = 0 ;i<4;i++){
        sum = sum + arr[i];
    }
    printf("Sum of all array elements is : %d",sum);
}*/

// 3. Write a C program to find the maximum element in an array.
/*int main() {
    int arr[] = {34,54,33,78};
    int max = arr[0];
    for(int i = 1 ;i<4;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("Maximum element in the array is : %d",max);
}*/

// 4. Write a C program to find the minimum element in an array.
/*int main() {
    int arr[] = {34,54,33,78};
    int min = arr[0];
    for(int i = 1 ;i<4;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("Minimum element in the array is : %d",min);
}*/

// 5. Write a C program to display array elements in reverse order.
/*int main() {
    int arr[] = {34,54,33,78};
    printf("Array elements in reverse order are :");
    for(int i = 3 ;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}*/

// 6. Write a C program to count even and odd numbers in an array.
/*int main() {
    int arr[] = {34,54,33,78,45,67,89,90};
    int even_count = 0;
    int odd_count = 0;
    for(int i = 0 ; i < 8 ; i++) {
        if(arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    printf("Even numbers count: %d\n", even_count);
    printf("Odd numbers count: %d\n", odd_count);
    return 0;
}*/

// 7. Write a C program to copy all elements from one array to another.
/*int main() {
    int arr1[] = {34,54,33,78};
    int arr2[4];

    for(int i = 0 ; i < 4 ; i++) {
        arr2[i] = arr1[i];
    }
    printf("Elements of second array are :");
    for(int i = 0 ; i < 4 ; i++) {
        printf("%d ", arr2[i]);
    }
    return 0;
}*/

// 8. Write a C program to search for an element in an array
/*int main() {
    int arr[] = {34,54,33,78,45,67,89,90};
    int search_element;
    int found = 0;

    printf("Enter element to search: ");
    scanf("%d", &search_element);

    for(int i = 0 ; i < 8 ; i++) {
        if(arr[i] == search_element) {
            found = 1;
            break;
        }
    }

    if(found) {
        printf("Element %d found in the array.\n", search_element);
    } else {
        printf("Element %d not found in the array.\n", search_element);
    }

    return 0;
}*/

// 9. Write a C program to sort an array in ascending order.
/*int main() {
	int arr[] = {43,56,74,23};
    int temp;
	for(int i = 0; i<=3;i++) {
		for(int j = i; j <=3 ; j++) {	
			if (arr[j] < arr[i]) 
				temp = arr[i], arr[i] = arr[j], arr[j] = temp;
		}
	}

    printf("Array elements in ascending order are :");
    for(int i = 0 ; i < 4 ; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}*/

// 10. Write a C program to merge two arrays into a third array.
int main() {
    int arr1[] = {34,54,33,78};
    int arr2[] = {12,45,67,89};
    int arr3[8];

    for(int i = 0 ; i < 4 ; i++) {
        arr3[i] = arr1[i];
    }
    for(int i = 0 ; i < 4 ; i++) {
        arr3[i+4] = arr2[i];
    }

    printf("Elements of merged array are :");
    for(int i = 0 ; i < 8 ; i++) {
        printf("%d ", arr3[i]);
    }
    return 0;
}
