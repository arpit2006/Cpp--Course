//
// Created by user on 27-Jan-25.
//
#include<iostream>
using namespace std;
int main()
{
  int num = 0;

  cout << "Enter a Number..: " << endl;
  cin >> num;

  if(num % 2 == 0)
    {
        cout << "Number is even..! " << endl;
    }
  else
     {
          cout << "Number is odd..!" << endl;
     }

     return 0;
}