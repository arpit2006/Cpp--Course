//
// Created by user on 27-Jan-25.
//
#include<iostream>
using namespace std;
int main()
{
  float num1 = 0;
  float num2 = 0;

  cout << "Enter float number..: " << endl;
  cin >> num1;

  cout << "Enter float number..: " << endl;
  cin >> num2;

  float mul = num1 * num2;

  cout << float(mul) << endl;

  return 0;
}