// reverse an array
/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int a;
    cin >> a;
    arr[n] = {a};

    for (int i = 0; i < n; i++)
    {
        swap(arr[i],arr[n]);
        n--;
    }
    cout << arr[n];
    return 0;
}
*/


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];  // Declare the array with size n

    // Input the elements into the array
    // by this loop we can enter the elements in the array
    // So basically we enter the number on the index place and that index is bouded by 'n' number which we give as the size of the array.
    // this loop will be run for atleset "n" time
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Reverse the array using two pointers approach
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        swap(arr[i], arr[j]);
    }

    // Output the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
