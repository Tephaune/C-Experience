// Decalare an array with 5 integers. The code should output the largest of the 5 numbers in the array.

#include <iostream>

using namespace std;

int main ()
{
    int numbers[5] = {1,2,3,4,5};
    int largest = numbers[0];

    for (int i = 1; i <= 5; ++i){
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    cout << "The largest number in the array is: " << largest;

    return 0;
}