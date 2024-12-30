#include<iostream>
using namespace std;

int main(){
    
    int num;
    cout << "Enter the number : ";
    cin >> num;
    int n = num;
    int sum = 0;

    while (n>0)
    {
        int digit = n%10;
        if(digit % 2 == 0){
            sum += digit;
        }
        n/=10;
    }
    
    cout << "The sum of number " << num << " is " << sum;
    return 0;
}