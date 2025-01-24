//Conditions in C++
// if  (if we want a particular block to execute on some condition)
//else (if we want another block to excute if (first if fails))
//else if (if we want to apply more conditions)
//Switch (when we have absolute values)
#include<iostream>
using namespace std;
int main()
{   
    int marks = 0;

    cout << "Enter Your Marks..: " << endl;
    cin >> marks;
    if (marks >= 60); // Condition
    {cout << "You are pass" << endl;}

    return 0;
}
