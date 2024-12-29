#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter the number of A and B :\n";
    cin >> a >> b;
    cout << "A is " << a << " and B is " << b << endl;

    if(a > b){
        cout << "A is larger then B.\n";
    }else if(b > a){
        cout << "B is larger then A.\n";
    }else{
        cout << "A and B are equal.\n";
    }

    return 0;
}