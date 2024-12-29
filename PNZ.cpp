#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter the number:";
    cin >> n;

    if(0 == n){
        cout << n << " is 0.";
    }else if(n > 0){
        cout << n << " is positive number.";
    }else{
        cout << n << " is negative number.";
    }

    return 0;
}