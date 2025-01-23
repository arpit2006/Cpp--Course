#include <iostream>
using namespace std;
int main()
{   //Declaration
    int quotient = 0,remainder = 0;
    int divisor = 0,dividend = 0;
    //Inputs
    cout << "Enter Divisor..: " << endl;
    cin >> divisor;
    cout << "Enter Dividend..: " << endl;
    cin >> dividend;
    //Calculation
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    //Outputs
    cout << "Quotient is...: " << quotient << endl;
    cout << "Remainder is..: " << remainder << endl;
    return 0;
}
