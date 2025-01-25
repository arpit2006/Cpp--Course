#include<iostream>
#include<string>
using namespace std;
int main()
{
    string var1 = "";
    
    cout << "Enter String..: " << endl;
    getline(cin,var1);

    for(int i = var1.length();i >=0;i--)
    {
        cout << var1[i];
    }

    
    return 0;
}