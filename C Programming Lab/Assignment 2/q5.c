// 5. An electric power distribution company charges its domestic 
// consumers as follows:

// 0 -200                  -       Rs. 0.50 per units
// 201 - 400               -       Rs. 100 plus Rs. 0.65 per unit excess of 200
// 401 - 600               -       Rs. 230 plus Rs. 0.80 per unit excess of 400
// 601 and above           -       Rs. 390 plus Rs. 1.00 per unit excess of 600


#include<stdio.h>
int main() {
    int units;
    float amt;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if(units <= 200) {
        amt = units * 0.50;
    }
    else if(units <= 400) {
        amt = 100 + (units - 200) * 0.65;
    }
    else if(units <= 600) {
        amt = 230 + (units - 400) * 0.80;
    }
    else {
        amt = 390 + (units - 600) * 1.00;
    }

    printf("Units Consumed: %d\n", units);
    printf("Bill Amount: Rs. %.2f\n", amt);

    return 0;
}
