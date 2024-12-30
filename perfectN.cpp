/*Check if a Number is a Perfect Number:

Take a positive integer as input.
Calculate the sum of all its divisors (excluding itself).
Compare the sum to the original number.
Output whether the number is a perfect number or not.
*/

//My code

#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number : ";
    cin >> num;
    int add = 0;

    for(int i=1; i<num; i++){
        if(num%i == 0){
            add += i;
        }
    }

    if (num == add){
        cout << "Enter number " << num << " is perfect number.";
    }else{
        cout << "Enter number " << num << " is not perfect number.";
    }

    return 0;
}

// By CatGPT
/*
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if (num <= 0) {  // Handle non-positive input
        cout << "Please enter a positive integer.";
        return 0;
    }

    int add = 0;

    // Loop only up to num / 2 for efficiency
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            add += i;
        }
    }

    if (num == add) {
        cout << "The number " << num << " is a perfect number.";
    } else {
        cout << "The number " << num << " is not a perfect number.";
    }

    return 0;
}
*/