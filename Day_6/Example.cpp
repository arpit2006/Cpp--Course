#include<iostream>
#include<string>
using namespace std;
int main()
{
    string firstname;
    string lastname;
    string fullname;
    string address;

    cout << "Enter Your Name..: " << endl;
    cin >> firstname;

    cout << "Enter Your Lastname..: " << endl;
    getline(cin,lastname);

    cout << "Enter Your Address..: " << endl;
    getline(cin,address);


    fullname = firstname + lastname;
    cout << "Your Details..: " << fullname << endl << address << endl;

    return 0;
}