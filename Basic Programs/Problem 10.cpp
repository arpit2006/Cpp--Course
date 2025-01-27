//
// Created by user on 27-Jan-25.
//
// Area = L * B
//Perimeter = 2*(L+b)

#include<iostream>
using namespace std;
int main()
{
  int length = 0;
  int breadth = 0;

  cout << "Enter Lenght of rectangle..: " << endl;
  cin >> length;

  cout << "Enter Breadth of rectangle..: " << endl;
  cin >> breadth;

  int area = length * breadth;
  int perimeter = 2 * (length + breadth);

  cout << "Area is..: " << area << endl;
  cout << "Perimeter is..: " << perimeter << endl;

  return 0;
}