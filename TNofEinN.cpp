/*
Count the Total Number of Even Digits in a Number
Write a program that:
Takes a positive integer as input.
Counts how many even digits are there in the given number.
Outputs the total count of even digits.
*/
#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter the number : ";
    cin >> num;
    int n = num;
    int total = 0;

    if (num < 0){ // For negative number
        cout << "Enter positive number";
    }

    if (num >= 0){ // For total even number from 1 to n.
        while (n > 0){
            int digit = n % 10;
            if (digit % 2 == 0){
                total++;
            }
            n /= 10;
        }
    }

    cout << "The sum of number " << num << " is " << total;
    return 0;
}

//By ChatGPT

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number : ";
    cin >> num;
    int n = num;  // Use n to extract digits from num
    int total = 0;

    if (num < 0) { // Check if the number is negative
        cout << "Please enter a positive number." << endl;
        return 1;  // Exit if the number is negative
    }

    while (n > 0) { // Loop through the digits of the number
        int digit = n % 10; // Get the last digit
        if (digit % 2 == 0) { // Check if the digit is even
            total++; // Increment total if even
        }
        n /= 10; // Remove the last digit
    }

    // Output the total count of even digits
    cout << "The total number of even digits in " << num << " is " << total << endl;

    return 0;
}
