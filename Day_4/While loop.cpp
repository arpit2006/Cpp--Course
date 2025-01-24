// #include<iostream>
// using namespace std;
// int main()
// {
//     int i = 0;
//     while (i <=10)
//     {
//         cout << i << endl;;
//         i+=1;
//     }
//     return 0;
// }

// Table of Number
#include <iostream>
using namespace std;
int main()
{
    int num = 0;
    int i = 0;

    cout << "Enter a Number..: " << endl;
    cin >> num;
    while (i <= 10)
    {
        cout << num << " * " << i << " = " << num * i << endl;
        i++;
    }
    return 0;
}