#include <iostream>
using namespace std;
int main()
{

    int arr[5] = {0};
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the number " << i << " : ";
        cin >> arr[i];
    }
    int min = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }


    cout << "Min is..: " << min << endl;

    return 0;
}
