#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    cout << "Enter number is :" << a << endl;

    //check if number is even.
    if(a % 2 == 0){
        cout << a << " is even number" << endl;
    }else{                                          // else odd number.
        cout << a << " is odd number" << endl;      
    }

    return 0;
}