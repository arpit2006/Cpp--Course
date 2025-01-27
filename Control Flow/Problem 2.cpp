//
// Created by user on 27-Jan-25.
//
#include<iostream>
using namespace std;
int main()
{
  int num1 = 0,num2 = 0,num3 = 0;

  cout << "Enter Number 1..: " << endl;
  cin >> num1;

  cout << "Enter Number 2..: " << endl;
  cin >> num2;

  cout << "Enter Number 3..: " << endl;
  cin >> num3;

  if (num1 > num2 and num1 > num3)
    {
        cout << "Number 1 is Largest..! " << endl;
    }
  else if (num2 > num1 and num2 > num3)
      {
          cout << "Number 2 is Largest..! " << endl;
      }
  else
       {
            cout << "Number 3 is Largest..! " << endl;
       }

       return 0;
}
