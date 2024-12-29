#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number is : "; // here enter the number
    cin >> num;

    // for loop for 2 to n-1 number
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << num << " number is not prime \n";
        }

        else
        {
            cout << num << " number is prime number \n";
        }
        break;
    }

    return 0;
}

//in my code after one iteration the for loop will be break and no other loop will be committed so if there is the number whio is no divisible by 2 byut divisibal by 3 then that numer never reach that point.Bofore that my loop will break.

// by chat gpt

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        cout << num << " is not prime." << endl;  // Handle numbers less than or equal to 1
    } else {
        bool isPrime = true;

        // Check divisibility from 2 to sqrt(num)
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = false;
                break;  // No need to check further if a divisor is found
            }
        }

        if (isPrime) {
            cout << num << " is a prime number." << endl;
        } else {
            cout << num << " is not a prime number." << endl;
        }
    }

    return 0;
}
