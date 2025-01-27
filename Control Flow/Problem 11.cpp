//
// Created by user on 27-Jan-25.
//
// #include<iostream>
// using namespace std;
// int main()
// {
//   int a = 0;
//   int b = 0;
//
//   cout << "Enter a Numeber..: " << endl;
//   cin >> a;
//
//   cout << "Enter another number..: " << endl;
//   cin >> b;
//
//   for (int i = a;i<=b;i++)
//     {
//         if(i % 2 == 0)
//         {
//                 cout << i  << endl;
//         }
//         else
//         {
//                 cout << i << endl;
//         }
//     }
//
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;

    cout << "Enter a number: " << endl;
    cin >> a;

    cout << "Enter another number: " << endl;
    cin >> b;

    for (int i = a; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " is Not Prime" << endl;
        }
        else
        {
            cout << i << " is Prime" << endl;
        }
    }

    return 0;
}
