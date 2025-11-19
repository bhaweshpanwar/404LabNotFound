#include <stdio.h>
#include <string.h>

int main() {
    int digit = 37;
    int strBinary[] = "";
    int tempDigit = digit;
    while(tempDigit >=0) {
        int remainder = tempDigit % 2;
        strBinary += remainder;
        tempDigit = tempDigit / 2;
    }
    strev(strBinary);

printf("\nBhawesh Panwar");
return 0;
}


#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    int digit = 37;
    char strBinary[32]; 
    int i = 0;

    int tempDigit = digit;
    while (tempDigit > 0) {
        int remainder = tempDigit % 2;
        strBinary[i++] = remainder + '0'; 
        tempDigit = tempDigit / 2;
    }
    strBinary[i] = '\0'; 

    reverseString(strBinary);  

    printf("Binary of %d is %s\n", digit, strBinary);

printf("\nBhawesh Panwar");
return 0;
}
