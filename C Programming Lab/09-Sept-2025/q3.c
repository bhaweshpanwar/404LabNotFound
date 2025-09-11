#include<stdio.h>

//question 3 - bank question
int main() {
    int code;    
    float balance;     
    float bonus = 0;

    printf("Enter account holder code (1=Male, 2=Female): ");
    scanf("%d", &code);

    printf("Enter account balance: ");
    scanf("%f", &balance);
  
    bonus = 0.02 * balance;

    if (code == 2 && balance > 5000) {
        bonus += 0.05 * balance;
    }

    printf("\nAccount Balance: %.2f\n", balance);
    printf("Bonus: %.2f\n", bonus);
    printf("Total with Bonus: %.2f\n", balance + bonus);

    return 0;
}