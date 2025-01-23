#include <iostream>
using namespace std;
int main()
{   //Declaration
    int Area = 0, Perimeter = 0;
    int length = 0, breadth = 0;
    //Inputs
    cout << "Enter Length..: " << endl;
    cin >> length;
    cout << "Enter Breadth..: " << endl;
    cin >> breadth;
    //Calculation
    Area = (length * breadth);
    Perimeter = 2 * (length + breadth);
    // Output
    cout << "Area of Rectangle is..: " << Area << endl;
    cout << "perimeter of Rectangle is..: " << Perimeter << endl;
    return 0;
}
