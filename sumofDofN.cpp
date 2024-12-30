// //Sum of Digits of a Number
// Write a program that:

// Takes an integer n as input.
// Calculates the sum of its digits.
// Handles both positive and negative numbers.

//Mine 

#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number : ";
    cin >> num;

    int n = abs(num);
    int sum = 0;


    if (n == 0)
    {
        cout << "The total sum is 0";
    }
    
    while (n > 0)
    {
        int digit = n % 10;
        sum = sum + digit;
        n /= 10;
    }

    cout << "The total sum of digit of " << num << " is " << sum;
    
    return 0;
}

//By Chat-BPT

#include <iostream>
#include <cmath> // For abs()
using namespace std;

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int n = abs(num); // Handle negative numbers
    int sum = 0;

    while (n > 0) {
        int digit = n % 10; // Extract the last digit
        sum += digit;       // Add digit to sum
        n /= 10;            // Remove the last digit
    }

    cout << "The total sum of digits of " << num << " is " << sum;
    return 0;
}
