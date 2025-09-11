/*Check Prime Number:
Given a number n, check whether it is a prime number.
💡 Hint: Iterate up to √n and check for divisibility.

Find GCD and LCM of Two Numbers:
Given two numbers a and b, compute their GCD and LCM.
💡 Hint: Use the Euclidean algorithm for GCD.

Check Armstrong Number:
A number is Armstrong if the sum of its digits raised to the power of the number of digits equals the number itself.
Example: 153 → 1³ + 5³ + 3³ = 153
💡 Hint: Use modulus and division to extract digits.

Count Digits in a Number:
Count the total digits in a number n.
💡 Hint: Use a loop and divide n by 10 repeatedly.

Reverse a Number:
Input a number and reverse its digits.
Example: 1234 → 4321

Check Palindrome Number:
A number is palindrome if it reads the same backward.
Example: 121, 1221

Print Fibonacci Series up to n terms:
Generate the Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, ...
💡 Hint: Use iterative method (not recursion initially).

Sum of Digits of a Number:
Input a number and find the sum of its digits.

Check if Number is Perfect Number:
A number is perfect if sum of its proper divisors equals the number.
Example: 6 → 1 + 2 + 3 = 6

Check if Number is Strong Number:
Sum of factorial of digits = number
Example: 145 = 1! + 4! + 5! = 145

Generate a Number Pyramid Pattern:
Example (n = 5):

Copy
Edit
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
Find the Sum of First n Prime Numbers:
Input n and print sum of first n prime numbers.

Find HCF of an Array of Numbers:
Given an array of size n, find the HCF of all elements.
💡 Hint: Reuse your GCD logic in a loop.

Check if Number is a Harshad Number (Niven Number):
A number is Harshad if it's divisible by the sum of its digits.
Example: 18 → 1 + 8 = 9; 18 % 9 == 0

Find All Prime Numbers in Range 1 to N:
Efficiently find all primes up to n.
💡 Hint: Try the Sieve of Eratosthenes (optional for challenge).*/

#include <iostream>
using namespace std;

/*int main()
{
    int n;
    cin >> n;
    bool is_prime = true;
    int i = n / 2 + 1;
    while (i > 1)
    {
        if (n % i == 0)
        {
            is_prime = false;
            break;
        }
        i--;
    }
    if (is_prime && n > 1)
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;
    return 0;
}*/

/*int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int numOne = 12;
    int numTwo = 18;
    int gcdValue = gcd(numOne, numTwo);
    int lcmValue = (numOne * numTwo) / gcdValue;
    cout << "GCD of " << numOne << " and " << numTwo << " is: " << gcdValue << endl;
    cout << "LCM of " << numOne << " and " << numTwo << " is: " << lcmValue << endl;
    return 0;
}*/

/*int main()
{
    int no = 158;
    int d = no;
    int a, arm;
    while (no > 0)
    {
        a = no % 10;
        no /= 10;
        arm = arm + a * a * a;
    }
    if (d == arm)
        cout << "Entered Number is Armstrong number";

    else
        cout << "Entered Number is not Armstrong number";
}*/

/*int main()
{
    int no = 56334242;
    int count = 0;
    while (no > 0)
    {
        count++;
        no /= 10;
    }
    cout << "digits in number are :" << count;
}*/

/*int main()
{
    int no = 56334242;
    int result = 0;
    int digit;
    while (no > 0)
    {
        digit = no % 10;
        no /= 10;
        result = result * 10 + digit;
    }

    cout << "reverse :" << result;
}*/

/*int main()
{
    int no = 2324;
    int d = no;
    int result = 0;
    int digit;
    while (no > 0)
    {
        digit = no % 10;
        no /= 10;
        result = result * 10 + digit;
    }

    if (d == result)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}*/

/*int main()
{
    int count_to_print;
    cout << "Enter element count in series :";
    cin >> count_to_print;

    int f = 0, s = 1, next;

    if (count_to_print >= 1)
    {
        cout << f << " ";
    }
    if (count_to_print >= 2)
    {
        cout << s << " ";
    }

    for (int i = 2; i < count_to_print; ++i)
    {
        next = f + s;
        cout << next << " ";
        f = s;
        s = next;
    }
}*/

// sum of a digits of a number

/*int main()
{
    int no;
    cout << "Enter a digit :";
    cin >> no;
    int ha = 0, hb = 0, hc; // help variables help-a help-b help-c
    while (no > 0)
    {
        ha = no % 10;
        hb = hb + ha;
        no /= 10;
    }

    cout << "sum is :" << hb;
}*/

// check if a number is a perfect number
/*#include <vector>
int main()
{
    int no;
    cout << "number :";
    cin >> no;
    vector<int> divisors;
    int sum = 0;
    for (int i = 1; i < no; i++)
    {
        if (no % i == 0)
        {
            divisors.push_back(i);
            sum += i;
        }
    }
    if (sum == no)
    {
        cout << "it is a perfect number\n";
        cout << "divisors :";
        for (const auto &num : divisors)
        {
            cout << num << " ";
        }
    }
    else
    {
        cout << "nigga entered numbers is not a perfect number\n";
        cout << "divisors :";
        for (const auto &num : divisors)
        {
            cout << num << " ";
        }
    }
}*/

// Check if Number is Strong Number:
// Sum of factorial of digits = number
// Example: 145 = 1! + 4! + 5! = 145
/*int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;

    int sum = 0;
    int temp = n;
    int fact;
    while (temp > 0)
    {
        int digit = n % 10;
        temp /= 10;

        for (int i = digit; i >= 1; i--)
        {
            fact *= i;
        }
        sum += fact;
    }
    if (sum == n)
    {
        cout << "Strong number";
    }
    else
    {
        cout << "Not a strong number";
    }
    return 0;
}*/

////////////////////////////////////////////////////////////////////////////////// day 2
// Count the Number of Prime Digits in a Number
// Example: Input 2357 → Prime digits are 2, 3, 5, 7 → Output = 4

// Count the Number of Prime Digits in a Number
// Example: Input 2357 → Prime digits are 2, 3, 5, 7 → Output = 4

// #include <iostream>
// #include <vector>
// using namespace std;

// // let's create a function that will check & return Boolean
// bool is_prime(int digit)
// {
//     if (digit <= 1) // 0 and 1 are not prime
//         return false;

//     for (int i = 2; i < digit; i++) // start from 2, go up to digit-1
//     {
//         if (digit % i == 0)
//             return false;
//     }
//     return true;
// }

// int main()
// {

//     // what i can do here is that take a input, use a while loop, i can use a counter to count and yeah i am good to go

//     int no;
//     cout << "Enter a digit :";
//     cin >> no;

//     int useOne = no, useTwo;
//     int count = 0;
//     vector<int> primes;

//     while (useOne > 0)
//     {
//         useTwo = useOne % 10;
//         if (is_prime(useTwo))
//         {
//             count++;
//             primes.push_back(useTwo);
//         }

//         useOne /= 10;
//     }

//     cout << "Digit is:" << no << endl;
//     cout << "prime numbers are :" << count << endl;

//     for (int i : primes)
//     {
//         cout << i << " ";
//     }

//     return 0;
// }

// Print All Divisors of a Number
// Input n → Output all numbers that divide n (excluding n itself if you want)

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int no;
    cout << "Enter a digit :";
    cin >> no;

    vector<int> divisors;

    for (int i = 2; i < no; i++)
    {
        d
    }

    return 0;
}

// Check if a Number is a Palindrome Without Converting to String
// No use of strings or arrays. Use only math.

// Check if a Number is a Spy Number
// A number is spy if the sum of its digits = product of its digits
// Example: 1124 → 1+1+2+4 = 8 and 1×1×2×4 = 8 → Spy

// Print Numbers from 1 to n Without Using Loops
// 💡 Hint: Use recursion