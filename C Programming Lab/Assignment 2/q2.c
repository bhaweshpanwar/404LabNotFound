// Write a program to count the number of boys and girls
// in a class. (Use code 1 for a boy and 2 for a girl.)

#include <stdio.h>

int main() {
    int studentCount;
    int boys = 0, girls = 0;

    printf("Enter the number of students in the class: ");
    scanf("%d", &studentCount);

    int genderCodes[studentCount]; 


    for (int i = 0; i < studentCount; i++) {
        printf("Enter gender code for student %d (1 = Boy, 2 = Girl): ", i + 1);
        scanf("%d", &genderCodes[i]);

        
        if (genderCodes[i] == 1) {
            boys++;
            
        } else if (genderCodes[i] == 2) {
            girls++;  
        }
    }

    printf("Total Boys  = %d\n", boys);
    printf("Total Girls = %d\n", girls);

    return 0;
}
