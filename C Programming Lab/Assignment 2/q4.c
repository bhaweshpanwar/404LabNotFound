// Write a program for grading students in an academic institution 
// according to the following rules:

// 0–39 → Fail
// 40–49 → Third Division
// 50–59 → Second Division
// 60–79 → First Division
// 80–100 → Honours

#include <stdio.h>

int main() {
    int score;
    printf("Enter Your Score (0 - 100): ");
    scanf("%d", &score);

    if (score < 0 || score > 100) {
        printf("Invalid Score! Please enter between 0 and 100.\n");
    }
    else if (score >= 80 && score <= 100) {
        printf("Honours\n");
    }
    else if (score >= 60 && score <= 79) {
        printf("First Division\n");
    }
    else if (score >= 50 && score <= 59) {
        printf("Second Division\n");
    }
    else if (score >= 40 && score <= 49) {
        printf("Third Division\n");
    }
    else {
        printf("Fail\n");
    }

    return 0;
}
