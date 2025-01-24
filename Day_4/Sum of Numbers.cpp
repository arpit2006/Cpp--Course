#include <iostream>
using namespace std;
int main()
{
    int num = 0;
    int i = 0;
    int sum = 0;

    cout << "Enter a Number..: " << endl;
    cin >> num;

    for (i = 0; i <= num; i++)
    {
        sum = sum + i;
    }
    cout << "Sum of the Numbers is..: " << sum << endl;
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int num = 0;
    int sum = 0;
    int i = 0;

    cout << "Enter a Number..: " << endl;
    cin >> num;

    while (i <= num)
    {
        sum = sum + i;
        i++;
    }
    cout << "Sum is..: " << sum << endl;
    return 0;
}