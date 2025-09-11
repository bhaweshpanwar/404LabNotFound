#include<stdio.h>

//question 05
// An electric power distribution company charges as follows:
// 0 – 200 units → ₹0.50 per unit
// 201 – 400 units → ₹100 + ₹0.65 per unit excess of 200
// 401 – 600 units → ₹230 + ₹0.80 per unit excess of 400
// 601 and above → ₹390 + ₹1.00 per unit excess of 600


int main() {
    int units;
    float charge = 0.0;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 200) {
        charge = units * 0.50;
    }
    else if (units <= 400) {
        charge = 100 + (units - 200) * 0.65;
    }
    else if (units <= 600) {
        charge = 230 + (units - 400) * 0.80;
    }
    else {
        charge = 390 + (units - 600) * 1.00;
    }

    printf("Total electricity bill = Rs. %.2f\n", charge);

    return 0;
}