/*
Challenge: Find the Greatest Common Divisor (GCD)
Write a program that:
Takes two positive integers as input.
Calculates their GCD using the Euclidean Algorithm.
Outputs the GCD of the two numbers.
*/

//My code
//Brute Force Approch
#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    cin >> num1;
    cin >> num2;
    cout << "Enter the number 1: "<< num1 << " number 2: " << num2;

    int gcd = INT32_MIN;
    for(int i=1; i < max(num1,num2); i++){
        if(num1%i == 0 && num2%i == 0){
            gcd = max(gcd,i);
        }
    }

    cout << "GCD of given numbers " << num1 << " " << num2 << " is " << gcd;
    return 0;
}

/*
Feedback on Your Code
Correctness:
The logic of iterating from 1 to max(num1, num2) and checking divisors is valid.
However, there's a small bug: you need to include max(num1, num2) in the range of your loop, so the for loop should be i <= max(num1, num2).

Optimization:
Your current approach works but is inefficient because it checks all numbers up to the maximum of the two input numbers. Using the Euclidean Algorithm would be much faster.

Edge Cases:
If one or both numbers are 0, the program doesn't handle them. The GCD of a number and 0 is the number itself, and GCD(0, 0) is undefined.
Variable Initialization:
gcd = INT32_MIN is unnecessary. Instead, start with gcd = 1 or simply declare it as int gcd; and update it in the loop.
*/

//By chatGPT
/*
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Handle edge cases
    if (num1 == 0 && num2 == 0) {
        cout << "GCD is undefined for 0 and 0.";
        return 0;
    }

    // Make both numbers positive
    num1 = abs(num1);
    num2 = abs(num2);

    // Euclidean algorithm for GCD
    while (num2 != 0) {
        int remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }

    cout << "The GCD of the given numbers is: " << num1;
    return 0;
}


It has a time complexity of O(log(min(a,b))), which is much faster than your current brute-force approach.
It’s clean and easy to implement, avoiding unnecessary checks.
*/