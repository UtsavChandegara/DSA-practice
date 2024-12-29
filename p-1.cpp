#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;

    cout << "Enter the value of n :";
    cin >> n;

    for (int i = 1; i <= n; i++){
        sum += i;
    }
    
    cout << "The sum of " << n << " is " << sum;
    return 0;
}