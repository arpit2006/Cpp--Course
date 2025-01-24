#include <iostream>
using namespace std;
int main()
{
    int num = 0;

    cout << "Enter a Number..: " << endl;
    cin >> num;

    if (num >= 100 and num <= 200)
    {
        cout << "Number is in Range..! ";
    }
    else
    {
        cout << "Number is not in Range..! ";
    }

    return 0;
}
