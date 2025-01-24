#include <iostream>
using namespace std;
int main()
{
    int num = 0;

    cout << "Enter a Number..: " << endl;
    cin >> num;

    if (num % 3 == 0)
    {
        cout << "Number is Multiple of 3..! " << endl;
    }
    else
    {
        cout << "Number is not Multiple of 3..! " << endl;
    }

    return 0;
}
