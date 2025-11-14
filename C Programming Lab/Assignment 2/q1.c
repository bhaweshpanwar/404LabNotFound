// Write a program to count the number of boys whose weight is less than 50 Kg and 
//height is greater than 170 cm.

#include <stdio.h>

int main() {
    int boyCount, count = 0;

    printf("Enter the number of boys: ");
    scanf("%d", &boyCount);

    int boysDataArray[boyCount][2]; 

    for (int i = 0; i < boyCount; i++) {
        printf("\nEnter weight (kg) and height (cm) for boy %d: ", i + 1);
        scanf("%d %d", &boysDataArray[i][0], &boysDataArray[i][1]);
    }

    for (int i = 0; i < boyCount; i++) {
        int weight = boysDataArray[i][0];
        int height = boysDataArray[i][1];

        if (weight < 50 && height > 170) {
            count++;
        } 
    }

    printf("\nTotal boys with weight < 50 kg and height > 170 cm = %d\n", count);

    return 0;
}
