// ========================= QUESTION 1 =========================
// Write a program that will print your mailing address
#include <stdio.h>

void question1() {
    printf("Question 1 - Mailing Address:\n");
    printf("Bhawesh Panwar\n");
    printf("229-B, Sudama Nagar\n");
    printf("Madhya Pradesh, 452009\n\n");
}

// ========================= QUESTION 2 =========================
// Given the radius of a circle, compute and display its area
#include <stdio.h>
#define PI 3.14159

void question2() {
    float radius = 5.0;
    float area;
    
    printf("Question 2 - Circle Area:\n");
    area = PI * radius * radius;
    printf("Radius: %.2f\n", radius);
    printf("Area: %.2f\n\n", area);
}

// ========================= QUESTION 3 =========================
// Output multiplication table for 5
void question3() {
    int i;
    printf("Question 3 - Multiplication Table:\n");
    for(i = 1; i <= 10; i++) {
        printf("5*%d=%d\n", i, 5*i);
    }
    printf("\n");
}

// ========================= QUESTION 4 =========================
// Functions to add and subtract two numbers
int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

void question4() {
    int num1 = 20, num2 = 10;
    printf("Question 4 - Add and Subtract Functions:\n");
    printf("%d+%d=%d\n", num1, num2, add(num1, num2));
    printf("%d-%d=%d\n\n", num1, num2, sub(num1, num2));
}

// ========================= QUESTION 5 =========================
// Compute x = a/(b-c)
void question5() {
    float a, b, c, x;
    
    printf("Question 5 - Computing x = a/(b-c):\n");
    
    // Case (a)
    a = 250; b = 85; c = 25;
    if(b - c != 0) {
        x = a / (b - c);
        printf("(a) a=%.0f, b=%.0f, c=%.0f: x = %.2f\n", a, b, c, x);
    }
    
    // Case (b)
    a = 300; b = 70; c = 70;
    if(b - c != 0) {
        x = a / (b - c);
        printf("(b) a=%.0f, b=%.0f, c=%.0f: x = %.2f\n", a, b, c, x);
    } else {
        printf("(b) a=%.0f, b=%.0f, c=%.0f: Error - Division by zero!\n", a, b, c);
    }
    printf("Comment: In case (b), b-c = 0, which results in division by zero error.\n\n");
}

// ========================= QUESTION 6 =========================
// Temperature conversion between Celsius and Fahrenheit
void question6() {
    float celsius, fahrenheit;
    
    printf("Question 6 - Temperature Conversion:\n");
    
    // Celsius to Fahrenheit
    celsius = 25.0;
    fahrenheit = (9.0 * celsius / 5.0) + 32;
    printf("(a) %.2f°C = %.2f°F\n", celsius, fahrenheit);
    
    // Fahrenheit to Celsius
    fahrenheit = 77.0;
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    printf("(b) %.2f°F = %.2f°C\n\n", fahrenheit, celsius);
}

// ========================= QUESTION 7 =========================
// Area of triangle using Heron's formula
#include <math.h>

void question7() {
    float a, b, c, s, area;
    
    printf("Question 7 - Triangle Area (Heron's Formula):\n");
    
    a = 3.0; b = 4.0; c = 5.0;  // Example values
    s = (a + b + c) / 2;        // Semi-perimeter
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    
    printf("Sides: a=%.1f, b=%.1f, c=%.1f\n", a, b, c);
    printf("Semi-perimeter s = %.2f\n", s);
    printf("Area = %.2f\n\n", area);
}

// ========================= QUESTION 8 =========================
// Display equation of a line
void question8() {
    int a = 5, b = 8, c = 18;
    
    printf("Question 8 - Equation of Line:\n");
    printf("%dx+%dy=%d\n\n", a, b, c);
}

// ========================= QUESTION 9 =========================
// Find errors in the given program
void question9() {
    printf("Question 9 - Error Analysis:\n");
    printf("Original program has errors:\n");
    printf("#include (stdio.h)     // Error: Should use < > instead of ( )\n");
    printf("void main(void)\n");
    printf("{\n");
    printf("    print(&quot;Hello C&quot;);  // Error: Should be printf, not print\n");
    printf("}\n\n");
    
    printf("Corrected program:\n");
    printf("#include <stdio.h>\n");
    printf("void main(void)\n");
    printf("{\n");
    printf("    printf(\"Hello C\");\n");
    printf("}\n\n");
}

// ========================= QUESTION 10 =========================
// Find errors in the given program
void question10() {
    printf("Question 10 - Error Analysis:\n");
    printf("Original program has multiple errors:\n");
    printf("Include <math.h>       // Error: Should be #include\n");
    printf("main { }               // Error: Wrong syntax for main function\n");
    printf("(\n");
    printf("FLOAT X;               // Error: Should be 'float', not 'FLOAT'\n");
    printf("X = 2.5;\n");
    printf("Y = exp(x);            // Error: 'Y' not declared, 'x' should be 'X'\n");
    printf("Print(x,y);            // Error: Should be 'printf', wrong format\n");
    printf(")\n\n");
    
    printf("Corrected program:\n");
    printf("#include <math.h>\n");
    printf("#include <stdio.h>\n");
    printf("int main()\n");
    printf("{\n");
    printf("    float X, Y;\n");
    printf("    X = 2.5;\n");
    printf("    Y = exp(X);\n");
    printf("    printf(\"X = %.2f, Y = %.2f\\n\", X, Y);\n");
    printf("    return 0;\n");
    printf("}\n\n");
}

// ========================= MAIN FUNCTION =========================
int main() {
    printf("C Programming Solutions - 10 Questions\n");
    printf("=====================================\n\n");
    
    question1();
    question2();
    question3();
    question4();
    question5();
    question6();
    question7();
    question8();
    question9();
    question10();
    
    return 0;
}