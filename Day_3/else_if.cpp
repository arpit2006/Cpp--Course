#include <iostream>
using namespace std;
int main()
{
    int marks = 0;

    cout << "Enter Your Marks..: " << endl;
    cin >> marks;
    if (marks >= 60 and marks <= 100)
    {
        cout << "You are Pass..!!" << endl;
    }
    else if (marks >= 0 and marks < 60)
    {
        cout << "You are Fail..!!!!!" << endl;
    }
    else
    {
        cout << "Invalid Input..!!";
    }

    return 0;
}
