#include<iostream>
using namespace std;
int main()
    {
          int n = 0;
          int remainder = 0;
          int rev_num = 0;

          cout << "Enter a Number..: " << endl;
          cin >> n;

          while (n != 0)
            {
                remainder = n % 10;
                rev_num = rev_num * 10 + remainder;
                n = n / 10;

            }

            cout << rev_num << endl;

            return 0;
    }