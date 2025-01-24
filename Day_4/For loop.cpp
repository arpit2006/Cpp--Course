#include<iostream>
using namespace std;
int main()
{
    int x = 0;
    for (int x = 5; x > 0;x--)
    {
        cout << x << endl;;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int x = 0;
    for (x = 0; x < 5;x++);
    cout << x << endl;
    
    return 0;
}