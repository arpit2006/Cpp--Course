//
// Created by user on 27-Jan-25.
//
#include<iostream>
using namespace std;
int main()
{
  int num = 0;
  int rev_num = 0;
  int last_digit = 0;

  cout << "Enter a Number..: " << endl;
  cin >> num;

  int orignal_num = num; // it was getting modified so we created a variable

  while (num !=0)
    {
        last_digit = num % 10;
        rev_num = rev_num * 10 + last_digit;
        num = num/ 10;
    }

  cout << rev_num << endl;
    if(orignal_num == rev_num)
      {
        cout << "Palindrome..! " << endl;
      }
    else
      {
        cout << "Not Palindrome..! " << endl;
      }

        return 0;
}