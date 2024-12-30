#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main(){
    int number;
    cout << "Enter the number : ";
    cin >> number;
    int n = number;
    
    int digit = 0;
    while (n > 0)
    {
        digit++;
        n/=10;
    }

    int num = number;
    double septotal = 0;
    int newnum = 0;
    while (num > 0)
    {
        int d = num %10;
        septotal = pow(d, digit);
        newnum += septotal;
        num/=10;
    }
    
    if (number == newnum)
    {
        cout << "This number " << number << " is armstrong number";
    }else{
        cout << "This number " << number << " is not armstrong number";
    }
    
    return 0;
}

// int main(){
//     int prevnum;
//     cout << "Enter the number : ";
//     cin >> prevnum;
    
//     int newnum = 0;
//     int septotal = 0;
//     int n = prevnum;
//     int digit = 0;

//     while (n>0)
//     {
//         digit++;
//         n/=10;
//     }

//     while (n>0)
//     {
//         int num = n %10;
//         septotal = pow(num, digit);
//         newnum += septotal;
//         n/=10;
//     }

//     if (prevnum == newnum)
//     {
//         cout << "This number " << prevnum << " is armstrong number";
//     }else{
//         cout << "This number " << prevnum << " is not armstrong number";
//     }
    
//     return 0;
// }


// By ChatGPT
/*
#include <iostream>
#include <cmath> // Include cmath for pow()
using namespace std;

int main() {
    int number;
    cout << "Enter the number: ";
    cin >> number;

    int n = number;  // Temporary variable to count digits
    int digitCount = 0;

    // Count the number of digits
    while (n > 0) {
        digitCount++;
        n /= 10;
    }

    int temp = number;  // Temporary variable for Armstrong calculation
    int digitPowerSum = 0;

    // Calculate the sum of each digit raised to the power of the digit count
    while (temp > 0) {
        int digit = temp % 10;               // Extract the last digit
        digitPowerSum += pow(digit, digitCount); // Add digit^digitCount to sum
        temp /= 10;                          // Remove the last digit
    }

    // Check if the original number equals the calculated sum
    if (number == digitPowerSum) {
        cout << "This number " << number << " is an Armstrong number.";
    } else {
        cout << "This number " << number << " is not an Armstrong number.";
    }

    return 0;
}
*/