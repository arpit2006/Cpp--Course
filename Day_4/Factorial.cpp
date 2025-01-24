#include <iostream>
using namespace std;
int main()
{
    int num = 0;
    int factorial = 1; // If we use Zero it will show result 0

    cout << "Enter a Number..: " << endl;
    cin >> num;

    for (int i = 0; i <= num; i++)
    {
        factorial = factorial * i;
    }
    cout << "Factorial is..: " << factorial << endl;

    return 0;
}