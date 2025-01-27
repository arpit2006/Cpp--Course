//
// Created by user on 27-Jan-25.
//
// reverse a number

#include<iostream>
using namespace std;
int main()
{
  int n = 0;
  int rev_no = 0;
  int last_digit = 0;

  cout << "Enter the number of digits...: ";
  cin >> n;

  while (n != 0)
    {
        last_digit = n % 10;
        rev_no = rev_no * 10 + last_digit;
        n= n /10;
     }

     cout << rev_no;

     return 0;


}