//
// Created by user on 27-Jan-25.
//

#include<iostream>
using namespace std;
int main()
{
  int var1 = 0,var2 = 0;

  cout << "Enter 1 Number..: " << endl;
  cin >> var1;

  cout << "Enter 2 Number..: " << endl;
  cin >> var2;

  int temp = 0;

  temp = var1;
  var1 = var2;
  var2 = temp;

  cout << var1 << " " << var2 << endl;

  return 0;
}
