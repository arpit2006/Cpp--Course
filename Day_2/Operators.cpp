#include <iostream>
using namespace std;
int main()
{
    int var1 = 10;
    const int var2 = 20; //constant declaration

    var1 = 100;
    //var2 = 200; //cannot be modifiied

    cout << var1 << endl;
    cout << var2 << endl;
    return 0;
}

//Following are Operators in C++
//Arithmetic Operators --> +, -, *, /, % ,++x, x++, --x, x--
//Assignment Operators --> =, +=, -=, *=, /=, %=
//Comparison Operators --> ==, !=, >, <, >=, <=
//Logical Operators    --> &&, ||, !
//Bitwise Operators    --> &, |, ^, ~, <<, >>
//Member Access Operators --> . , ->
//Increment and Decrement Operators --> ++, --
//Coonsntants are name given to variable in C++ that can't be modified or changed onr initialized


