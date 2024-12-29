#include<iostream>
using namespace std;

int out = 0;
int n;

int fibonacci(int prev1,int prev2){
    int newfibo;
    if(out < n){
        newfibo = prev1 + prev2;
        prev2 = prev1;
        prev1 = newfibo;
        out++;
        cout << newfibo << endl;
    }
    return newfibo;
}

int main(){
    cout << "Enter the number :";
    cin >> n;
    cout << "The enter number is " << n;
    fibonacci(1,0);
    cout << fibonacci;
    return 0;
}