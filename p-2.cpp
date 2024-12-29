// largest among the enter numbers
/*
        #include <iostream>
        using namespace std;

        int main()
        {
            int n;
            cout << "Enter the number of you want to print number : ";
            cin >> n;
            int largest = 0;

            for(int i=1; i<n-1; i++){
                int a = 0;
                cin >> a;

                largest = max(largest, a);
            }
            cout << largest << "is the largest number among the enter number";
            return 0;
        }
*/


// from chat-gpt

#include <iostream>
#include <climits> // For INT_MIN
using namespace std;

int main() {
    int n;
    cout << "Enter the number of numbers you want to enter: ";
    cin >> n;

    int largest = INT_MIN; // Initialize to the smallest possible integer

    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++) { // Loop runs n times
        int a;
        cin >> a;
        largest = max(largest, a); // Update largest if a is greater
    }

    cout << largest << " is the largest number among the entered numbers." << endl;
    return 0;
}
