/*
A strong number is a special type of number where the sum of the factorials of its digits equals the number itself.
Key Points:
Factorial: The product of all positive integers up to a given number (e.g., 5!=5×4×3×2×1=120).
Check for Strong Number:
Split the number into its individual digits.
Find the factorial of each digit.
Sum these factorials.
If the sum equals the original number, it is a strong number.
*/

#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "enter the number : ";
    cin >> num;

    int n = num;
    int factorial = 1;
    int add = 0;
    while (n > 0)
    {
        int digit = n % 10;
        for(int i = 1; i <= digit; i++){
            factorial *= i;
        }
        add += factorial;
        n /= 10;
    }
    if(add==num){
        cout << "This number " << num << " is strong number.";
    }else{
        cout << "This number " << num << " is not strong number";
    }

    return 0;
}


// By ChatGPT
/*
#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "enter the number : ";
    cin >> num;

    int n = num;
    int add = 0;
    while (n > 0)
    {
        int digit = n % 10;
        int factorial = 1; // Reset factorial to 1 for each digit
        for(int i = 1; i <= digit; i++){
            factorial *= i;
        }
        add += factorial;
        n /= 10;
    }
    if(add == num){
        cout << "This number " << num << " is a strong number.";
    } else {
        cout << "This number " << num << " is not a strong number";
    }

    return 0;
}
*/