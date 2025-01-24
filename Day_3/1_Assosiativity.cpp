//Associativity of operators
// Associativity means that the order in which we perform operations does not change the result.
//Types of Associativity
//1. Left Associativity
//2. Right Associativity
//3. Non-Associative
#include<iostream>
using namespace std;
int main()
{   
    int var1 = 10,var2 = 20,var3 = 30;
    float total; // To be in safe side we used float instead of int
    total = var3 - var1 + var2; // Here,both of them belong to same precedence group so they are evaluated from left to right.this concept is called as associativity
    cout << total;

    return 0;
}

