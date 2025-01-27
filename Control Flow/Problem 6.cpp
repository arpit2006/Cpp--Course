//
// Created by user on 27-Jan-25.
//
#include<iostream>
using namespace std;
int main()
{
  int n = 0;
    int sum = 0;
  cout << "Enter a Number..: " << endl;
  cin >> n;

  for (int i = 0; i <= n;i++)
    {
       sum = sum + i;
    }

    cout << "Sum is..: " << sum << endl;
    return 0;
}