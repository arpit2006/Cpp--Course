// Max number in an array
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {0};

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Element " << i << endl;
        cin >> arr[i];
    }

    int max = arr[4];
    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    cout << "Max is..: " << max << endl;
    return 0;
}
