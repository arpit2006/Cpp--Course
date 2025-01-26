#include <iostream>
using namespace std;
int main()
{
    char mychar;

    cout << "Enter Character..: " << endl;
    cin >> mychar;

    if (mychar == 'a' || mychar == 'e' || mychar == 'i' || mychar == 'o' || mychar == 'u')
      {
      cout << "Vowel..! " << endl;
      }
      else
        {
        cout << "Consonant..! " << endl;
        }

        return 0;

}