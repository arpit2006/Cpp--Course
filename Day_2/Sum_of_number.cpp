//Predefined Values
#include <iostream>
using namespace std;
int main()
{
    int num1 = 1000;
    int num2 = 2000;
    int sum = 0;
    sum = num1 + num2;
    cout << "Sum of two numbers is: " << sum << endl;
    return 0;
}

//Input from user
#include <iostream>
using namespace std;
int main()
{
    int num1 = 0;
    int num2 = 0;
    int sum = 0;

    cout << "Enter a Number..: ";
    cin >> num1;
    cout << "Enter another Number..: ";
    cin >> num2;
    sum = num1 + num2;
    cout << "Sum of the Numbers is..: " << sum << endl;
    
    return 0;
}
