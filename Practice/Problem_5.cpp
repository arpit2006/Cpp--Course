#include<iostream>
using namespace std;
int main()
    {
          int year = 0;

          cout << "Enter a Year..: " << endl;
          cin >> year;

          if (year % 400 == 0 and year % 100 == 0)
            {
            cout << "The year is a leap year" << endl;
            }
            else if (year % 4 == 0 and year % 100 != 0)
              {
              cout << "The year is a leap year" << endl;
              }
              else
                {
                cout << "The year is not a leap year" << endl;
                }

                return 0;

    }