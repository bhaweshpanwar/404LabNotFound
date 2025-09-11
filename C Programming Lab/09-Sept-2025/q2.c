//question 02

#include<stdio.h>

int main() {
    // girl and boy count 
    int data[10];

    printf("If you are a boy press 1 and girl press 2, then pass it to next person.\n");

    for (int i = 0; i < 10; i++) {
        printf("Enter your input (%d/10): ", i + 1);
        scanf("%d", &data[i]);
    }

    printf("\nEntered Data is:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    int boy_count = 0, girl_count = 0;
    for (int i = 0; i < 10; i++) {
        if(data[i] == 1) 
        	boy_count++;
        else if(data[i] == 2)
        	girl_count++;
    }

    printf("Boys are:%d \n",boy_count);
    printf("Girls are:%d \n",girl_count);  
    return 0;
}
