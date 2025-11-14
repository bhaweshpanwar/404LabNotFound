// Write a program for a commercial bank has introduced an incentive policy 
// of giving bonus to all its deposit holders. The policy is as follows: 
// A bonus of 2 per cent of the balance held on 31st December is given to 
// every one, irrespective of their balance, and 5 per cent is given to female 
// account holders if their balance is more than Rs. 5000.

#include <stdio.h>

int main() {
    int code;    
    double balance;     
    double bonus = 0;

    printf("Enter account holder code (1 = Male, 2 = Female): ");
    scanf("%d", &code);

    if (code != 1 && code != 2) {
        printf("Invalid code! Please enter 1 for Male or 2 for Female.\n");
        return 1; 
    }

    printf("Enter account balance: ");
    scanf("%lf", &balance);

    bonus = 0.02 * balance;

    if (code == 2 && balance > 5000) {
        bonus += 0.05 * balance;
    }

    printf("\n--- Bonus Summary ---\n");
    printf("Account Holder: %s\n", (code == 1) ? "Male" : "Female");
    printf("Account Balance: %.2lf\n", balance);
    printf("Bonus Amount: %.2lf\n", bonus);
    printf("Total Balance (with Bonus): %.2lf\n", balance + bonus);

    return 0;
}
