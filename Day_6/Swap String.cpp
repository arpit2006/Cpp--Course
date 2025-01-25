#include <iostream>
#include <string>
using namespace std;
int main()
{
    string var1 = "";
    string var2 = "";
    string temp = "";

    cout << "Enter String..: " << endl;
    getline(cin, var1);

    cout << "Enter String..: " << endl;
    getline(cin, var2);

    temp = var1;
    var1 = var2;
    var2 = temp;

    cout << "Swapped String..: " << var1 << endl
        << var2 << endl;

    return 0;
}