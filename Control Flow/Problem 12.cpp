//
// Created by user on 27-Jan-25.
//

//Input: 9
//Output: Neon Number
//Explanation: square is 9*9 = 81 and
//sum of the digits of the square is 9.

#include<iostream>
using namespace std;
int main()
{
  int num = 0;
  int sum = 0;
  int last_digit = 0;

  cout << "Enter a Number..: " << endl;
  cin >> num;
  int orignal_num = num;


  int square = (num * num);
  cout << "Square is..: " << square << endl;

  while(square != 0)
    {
    last_digit = square % 10;
    sum = sum + last_digit;
    square = square / 10;
    }
    cout << sum << endl;

    if (orignal_num == sum)
      {
          cout << "Neon Number..! " << endl;
      }
    else
       {
            cout << "Not Neon Number..! " << endl;
       }
        return 0;


}
