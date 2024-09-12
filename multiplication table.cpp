#include <iostream>
using namespace std;

int main() {
    double number;
    
    cout << "Enter a number to generate its multiplication table: ";
    cin >> number;

    cout << "The multiplication table for the number " << number << " is: " << endl;
    
    for (int i = 0; i <= 12; ++i) {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;

}