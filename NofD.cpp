//Count the Number of Digits in an Integer

//My code

#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number : ";
    cin >> num;
    int n = num;
    int count = 0;

    while (n > 0)
    {
        if(n>0){
            count++;
        }
        n = n/10;
    }

    while (n < 0){
        if(n<0){
            count++;
        }
        n = n/10;
    }

    if(n = 0){
        cout << "totle digit is 1.";
    }
    cout << "The total digit of number is : " << count;
    
    return 0;
}

// By Chat-GPT

#include <iostream>
#include <cmath> // For abs()
using namespace std;

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if (num == 0) { // Special case for 0
        cout << "The total digits in the number are: 1";
        return 0;
    }

    int n = abs(num); // Use absolute value to handle negative numbers
    int count = 0;

    while (n > 0) {
        count++;
        n = n / 10; // Remove the last digit
    }

    cout << "The total digits in the number are: " << count;
    return 0;
}
