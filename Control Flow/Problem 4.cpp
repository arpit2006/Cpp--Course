//
// Created by user on 27-Jan-25.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here

    int year = 0;

    cout << "Enter Year: " << endl;
    cin >> year;

    if (year %  100 == 0 and year % 400 == 0)
      {
        cout << "Year is a leap year" << endl;
      }
    else if (year % 100 != 0 and year % 4 == 0)
      {
        cout << "Year is a leap year" << endl;
      }

    else
      {
        cout << "Year is not a leap year" << endl;
      }

      return 0;

}

