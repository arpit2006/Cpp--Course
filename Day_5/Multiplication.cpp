#include <iostream>
using namespace std;
int main()
{
    int arr[3] = {0};
    int mul = 1;

    for (int i = 0;i <3;i++)
    {
        cout << "Enter Element..: " << i << endl;
        cin >> arr[i];
    }
    for (int i = 0;i < 3;i++)
    {
        mul = mul * arr[i];
    }

    cout << "Mul is..: " << mul << endl;
    return 0;
}
