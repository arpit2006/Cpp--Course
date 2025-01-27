//
// Created by user on 27-Jan-25.
//
#include<iostream>
using namespace std;
int main()
{
  char my_char;

  cout << "Enter a character: " << endl;
  cin >> my_char;

  if (my_char == 'a' || my_char == 'e' || my_char == 'i' || my_char == 'o' || my_char == 'u')
    {
        cout << "Is a vowel" << endl;
    }
  else
    {
        cout << "Is a consonant" << endl;
    }

    return 0;
}