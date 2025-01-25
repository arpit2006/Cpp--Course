#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {0};

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Number..: " << i << endl;
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << "Even Numbers in an array is..: " << arr[i] << endl;
        }
    }

    return 0;
}
