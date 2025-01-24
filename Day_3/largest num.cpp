#include <iostream>
using namespace std;
int main()
{
    int num = 0,num1 = 0,num2 = 0;

    cout << "Enter Number 1..: " << endl;
    cin >> num;

    cout << "Enter Number 2..: " << endl;
    cin >> num1;

    cout << "Enter Number 2..: " << endl;
    cin >> num2;

    if (num > num1 and num > num2)
    {cout << "Number 1 is the largest number...!" << endl;
    }
    else if (num1 > num and num1 > num2)
    {
        cout << "Number 2 is the largest number...!" << endl;
    }
    else
    {
        cout << "Number 3 is the largest number...!" << endl;
    }
    return 0;
}
