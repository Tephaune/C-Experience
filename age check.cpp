#include <iostream>

using namespace std;

int main()
{
    int age;

    cout << "Please enter your age here: ";
    cin >> age;
     if (age < 13) {
        cout << "You are a child." << endl; 
    } else if (age >= 13 && age <= 19) {
        cout << "You are a teenager." << endl;
    } else if (age >= 20) {
        cout << "You are an adult." << endl;
    }

    return 0;

}