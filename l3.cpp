#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter three number :";
    cin >> a >> b >> c;//enter three number
    cout << "Enter number a is:" << a << " b is:"<< b << " c is:"<< c << "\n"; 


    //select one of them which is large
    if(a > b){
        if(a > c){
            cout << "a:" << a << " is large number among three";
        }
    }else  if(b > c){
        cout << "b:" << b << " is large number among three";
    }else{
        cout << "c:" << c << " is large number among three";
    }

    return 0;
}



// chat gpt
// first code

#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;  // Enter three numbers

    // Display the entered numbers
    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;

    // Check which number is the largest
    if (a >= b && a >= c) {
        cout << "The largest number is: " << a << endl;
    } else if (b >= a && b >= c) {
        cout << "The largest number is: " << b << endl;
    } else {
        cout << "The largest number is: " << c << endl;
    }

    return 0;
}

// second code.

#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;  // Enter three numbers

    // Display the entered numbers
    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;

    // Check which number is the largest
    if (a >= b && a >= c) {
        cout << "The largest number is: " << a << endl;
    } else if (b >= c) {
        cout << "The largest number is: " << b << endl;
    } else {
        cout << "The largest number is: " << c << endl;
    }

    return 0;
}
