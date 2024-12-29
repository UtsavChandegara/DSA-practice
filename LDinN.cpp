#include <iostream>
using namespace std;

int main()
{
    int num;
    int digit = INT32_MIN;
    cin >> num;
    cout << "Enter number is :" << num << ".\n";
    int d = num;

    while (d > 0)
    {
        int n = d % 10;
        digit = max(digit, n);
        d /= 10;
    }

    if (num < 0)
    {
        cout << "Please enter a positive number.\n";
        return 0;
    }

    if (num == 0)
    {
        cout << "The largest digit is 0.\n";
        return 0;
    }

    cout << digit << " is the largest among the digit of number " << num;

    return 0;
}