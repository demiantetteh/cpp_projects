#include <iostream>
using namespace std;

int main() {
    char choice;
    
    do {
        int x;
        
        cout << "Enter a positive integer (x): ";
        cin >> x;

        int a = x;
        int k = 0;
        int largest = a;
        int largest_position = 0;

        cout << "a0 = " << a << ", ";

        while (a != 1) {
            if (a % 2 == 0) {
                a = a / 2;
            } else {
                a = 3 * a + 1;
            }
            
            k++;
            cout << "a" << k << " = " << a;
            
            if (k < 10) {
                cout << ", ";
            } else {
                cout << endl;
            }

            if (a > largest) {
                largest = a;
                largest_position = k;
            }
        }

        cout << endl;
        cout << "k = " << k << endl;
        cout << "The largest number in the sequence is " << largest << " at position " << largest_position << endl;

        cout << "Do you want to try another value (y/n)? ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
