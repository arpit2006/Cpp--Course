// Precedence of operators           
// 1. Parentheses
// 2. Exponents
// 3. Multiplication and Division
// 4. Addition and Subtraction
// 5. Assignment operators
// 6. Comparison operators
// 7. Logical operators
// 8. Equality operators
// 9. Bitwise operators
// 10. Conditional operators
// 11. Ternary operator
// 12. Comma operator
// 13. Postfix operators
// 14. Prefix operators
// 15. Increment and Decrement operators
// 16. Member access operators
//Precedece means the order in which operators are evaluated when there are multiple operators in an expression.
#include<iostream>
using namespace std;
int main()
{   
    int var1 = 10,var2 = 20,var3 = 30;
    float total; // To be in safe side we used float instead of int
    total = var3 / var1 + var2; // Here, the division is performed first and then addition
    cout << total;

    return 0;
}

#include<iostream>
using namespace std;
int main()
{   
    int var1 = 10,var2 = 20,var3 = 30;
    float total; // To be in safe side we used float instead of int
    total = var3 / var1 * var2; // Here,both of them belong to same precedence group so they are evaluated from left to right.this concept is called as associativity
    cout << total;

    return 0;
}

