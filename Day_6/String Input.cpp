#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    cout << "Enter Your Name..: " << endl;
    // it will not take whole string as input only first string so we have to use getline
    cin >> name;

    cout << name;
    return 0;
}