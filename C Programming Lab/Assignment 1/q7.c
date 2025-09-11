#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area;
    
    printf("Question 7 - Triangle Area (Heron's Formula):\n");
    
    a = 7.0; b = 4.0; c = 9.0;  
    s = (a + b + c) / 2;        
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    
    printf("Sides: a=%.1f, b=%.1f, c=%.1f\n", a, b, c);
    printf("Semi-perimeter s = %.2f\n", s);
    printf("Area = %.2f\n\n", area);

    return 0;
}
