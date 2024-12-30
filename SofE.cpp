/*
Sum of All Even Numbers Up to N
Write a program that:
Takes an integer N as input.
Calculates the sum of all even numbers from 1 to N (inclusive).
Outputs the result.
*/

#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number : ";
    cin >> num;
    int sum = 0;

    for(int i=0; i<=num; i++){
        if (i%2 == 0)
        {
            sum += i;
        }
    }

    cout << "The sum of number " << num << " is " << sum;
    return 0;
}

//Improvment

// Message Clarity: The output message could be more clear. Instead of saying "The sum of number", it might be more accurate to say "The sum of even numbers from 1 to num".