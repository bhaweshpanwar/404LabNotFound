#include <stdio.h>

// int main() {
//     printf("Bhawesh Panwar\n");
//     printf("229, B Sudama Nagar\n");
//     printf("Madhya Pradesh, 452009\n");
//     return 0;
// }




//class task

//q1 = A = underroot s (s-a)(s-b)(s-c)
//q2 = ax + by = c where a= 5, b = 8, c = 18
//q3 calculator where x and y will be defined by the user and the functions will be sum, difference, product, division

#include <math.h>
// int main() {
//     float a = 5.0, b = 6.0, c = 8.0;
//     float s = (a + b + c) / 2; // semi-perimeter
//     float area = sqrt(s * (s - a) * (s - b) * (s - c));
//     printf("Area of triangle with sides %.2f, %.2f, %.2f is: %.2f\n", a, b, c, area);
//     return 0;
// }

//q2 = ax + by = c where a= 5, b = 8, c = 18
int main() {
    int a = 5, b = 8, c = 18;
    int x, y;
    // Finding one solution (not all solutions)
    //explain this solution
    // We iterate over possible values of x and calculate corresponding y
    
    for (x = -10; x <= 10; x++) {
        if ((c - a * x) % b == 0) {
            y = (c - a * x) / b;
            printf("One solution is: x = %d, y = %d\n", x, y);
            break;
        }
    }
    return 0;
}

