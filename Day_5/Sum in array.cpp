#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {0};
    int sum = 0;

    for (int i = 0;i <5;i++)
    {
        cout << "Enter Element..: " << i << endl;
        cin >> arr[i];
    }
    for (int i = 0;i < 5;i++)
    {
        sum = sum + arr[i];
    }

    cout << "Sum is..: " << sum << endl;
    return 0;
}
