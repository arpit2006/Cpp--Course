#include <iostream>
using namespace std;
int main()
{   //Declaration
    int number = 0;
    int first = 0;
    int last = 0;
    int middle = 0;
    //Inputs
    cout <<  "Enter a Number..: " << endl;
    cin >> number;
    //Calculations
    first = number / 100;
    last = number % 10;
    middle = (number/10) % 10;
    //Outputs
    cout << "First Number..: " << first << endl;
    cout << "Last Number..: " << last << endl;
    cout << "Middle Number..: " << middle << endl;
    return 0;
}
