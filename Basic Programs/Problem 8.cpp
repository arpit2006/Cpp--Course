//
// Created by user on 27-Jan-25.
//
//C=
//9
//5
//​
// ×(°F−32)
#include<iostream>
using namespace std;
int main()
{
  int temp = 0;

  cout << "Enter Tempreture in Fahrenheit: " << endl;
  cin >> temp;

  int celsius = (temp - 32) * 5 / 9;

  cout << "Tempreture in Celcius..: " << celsius << endl;

  return 0;
}