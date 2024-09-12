#include <iostream>
#include <string>

using namespace std;

int main()
{
    string password;

    cout << "Enter password here: " << endl;
    cin >> password;

     if (password == "1234") {
        cout << "Access granted :)" << endl; 
     } else {
        cout << "Access denied :(" << endl;
    }

    return 0;

}