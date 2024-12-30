/*
Count the Total Number of Even Digits to Number
Write a program that:
Takes a positive integer as input.
Counts how many even digits are there in the given number.
Outputs the total count of even digits.
*/

// My code

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;//Enter number
    int total = 0;

    if (num < 0){// For negative number
        cout << "Enter positive number";
    }

    if (num >= 0){// For total even number from 1 to n.
        for (int i = 1; i <= num; i++){
            if (i % 2 == 0){
                total++;
            }
        }
        cout << "The total number of even number from 1 to " << num << " is " << total;
    }

    return 0;
}