#include <iostream>
using namespace std;
int main()
{
    char alpha = 0;

    cout << "Enter any Character..: " << endl;
    cin >> alpha;

    if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u')
    {
        cout << "It is a Vowel..! " << endl;
    }
    else
    {
        cout << "It is a Consonant..! " << endl;
    }

    return 0;
}
