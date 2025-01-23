#include <iostream>
using namespace std;
int main()

// cin>> it takes input from user through keyboard (>> is extraction operator)
// cout<< it prints output on screen keyboard (<< insertion operator)
{
    int age = 0; //we are int it with 0 because it was storing any randomm value in it before it was int with 0
    cout << "Enter your age..: " << endl;
    cin >> age;
    cout << "Your age is: " << age << endl;
    return 0;
}