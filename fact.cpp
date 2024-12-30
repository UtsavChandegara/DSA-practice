// factorial of number

//mine code

#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number : ";
    cin >> num;//get input of number
    int factorial = 1;

    for (int i = 1; i <= num; i++){// for find factorial of number
        factorial *= i;
    }

    //for enter number is 0.
    if (num == 0)
    {
       factorial = 1;
    }
    
    cout << factorial << " is a Factorial of " << num;
    return 0;
}


//improvement of code
/*
Key Improvements:
Negative Number Handling:Added a check to ensure factorial is only calculated for non-negative numbers.
Output Clarity:Improved the output message for better readability.
Optimization for 0!:You can skip the loop entirely for num == 0.
*/

// By Chat-GPT

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num; // Get input of the number

    // Handle negative input
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers.";
        return 0; // Exit the program
    }

    // Handle factorial for non-negative numbers
    int factorial = 1;
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    cout << "The factorial of " << num << " is " << factorial << ".";
    return 0;
}
