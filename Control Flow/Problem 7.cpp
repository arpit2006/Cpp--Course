//
// Created by user on 27-Jan-25.
//
#include<iostream>
using namespace std;
int main()
{
  int n = 0;
  int factorial = 1;

  cout << "Enter a number: " << endl;
  cin >> n;

  for (int i = 1;i <=n;i++)
    {
        factorial = factorial * i;
    }

    cout <<  "Factorial is..: " << factorial << endl;

    return 0;
}