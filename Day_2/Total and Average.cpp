#include <iostream>
using namespace std;
int main()
{   //Declaration
    int num1 = 0,num2 = 0,num3 = 0,num4 = 0;
    int total = 0 ,average = 0;
    //Inputs
    cout << "Enter Marks 1..: " << endl;
    cin >> num1;
    cout << "Enter Marks 2..: " << endl;
    cin >> num2;
    cout << "Enter Marks 3..: " << endl;
    cin >> num3;
    cout << "Enter Marks 4..: " << endl;
    cin >> num4;
    //Calculations
    total = num1 + num2 + num3 + num4;
    average = total / 4;
    //Outputs
    cout << "Total Marks is..: " << total << endl;
    cout << "Average Marks is..: " << average << endl;
    return 0;
}
