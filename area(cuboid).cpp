#include <iostream>

using namespace std;

int main()
{
   double length;
   double width;
   double height;
   double volume;

   cout << "What is the length, width, and height of your cuboid? " << endl;
   cin >> length >> width >> height;

   volume = length * width * height;

   cout << "The volume of the cuboid is: " << volume;

   return 0;
}