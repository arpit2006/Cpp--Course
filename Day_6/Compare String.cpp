#include<iostream>
#include<string>
using namespace std;
int main()
{
    string var1 = "";
    string var2 = "";

    cout << "Enter String..: " << endl;
    getline(cin,var1);

    cout << "Enter String..: " << endl;
    getline(cin,var2);

    if (var1.compare(var2) == 0)
    {
        cout << "Same" << endl;
    }
    else{
        cout << "Not Same..!";
    }
    return 0;
}