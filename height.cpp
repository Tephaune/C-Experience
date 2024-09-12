#include <iostream>

using namespace std;

int main() {
    double feet;
    double inches;
    double totalInches;
    double totalCm;

    cout << "Enter feet: ";
    cin >> feet;

    cout << "Enter inches: ";
    cin >> inches;

    totalInches = (feet * 12) + inches;
    totalCm = totalInches * 2.54;

    cout << "Your height in centimeters is: " << totalCm << endl;

    return 0;



}