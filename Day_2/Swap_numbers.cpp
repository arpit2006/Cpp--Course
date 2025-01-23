#include <iostream>
using namespace std;
int main()
{
    int num1 = 0;
    int num2 = 0;
    int temp = 0;

    cout << "Enter a Number..: ";
    cin >> num1;
    cout << "Enter another Number..: ";
    cin >> num2;
    
    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "Swap Numbers are..: " << num1 << endl << num2;
    
    
    return 0;
}
