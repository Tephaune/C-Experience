#include <iostream>

using namespace std;

int main()
{
    double num1;
    double num2;
    double sum;

    cout << "Enter the first numeber you would like to add: ";
    cin >> num1;

    cout << "Enter the second number you would like to add: ";
    cin >> num2;

    sum = (num1 + num2);

    cout << "Your total is: " << sum << endl;


    return 0;

}