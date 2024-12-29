#include <iostream>
using namespace std;

int main()
{

    int number;
    cin >> number;
    cout << "Enter number is :" << number << ".\n";
    int reverse = 0;
    int n = number;

    while (n > 0)
    {
        int digit = n % 10;             // give last number
        reverse = reverse * 10 + digit; // first reverse number is multiplayby 10 and then add digit store last number
        n /= 10;                        // number will divide by 10 and integer number only save.
    }

    if (number < 0)
    {
        cout << "The number is not a palindrome"; // Negative numbers are not palindromes.
        return 0;
    }
    if (reverse == number)
    {
        cout << "The number is palindrome";
    }
    else
    {
        cout << "The number is not palindrome";
    }

    return 0;
}