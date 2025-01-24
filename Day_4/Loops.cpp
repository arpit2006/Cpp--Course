//Loops Types
//1. For Loop
//For Syntax 
// --> for (start;condition;increment)
// {
//     //body
// }

//2. While Loop
//While Syntax
// --> while (condition)
// {
//     //body
// }

//3. Do-While Loop
//Do-While Syntax
// --> do
// {
//     //body
// }
// while (condition);

//Loops means repetition of a block of code

//For Loop is used when we know how many times we want to repeat the code

//While Loop is used when we don't know how many times we want to repeat the code

//Do-While Loop is used when we want to repeat the code at least once

// #include<iostream>
// using namespace std;
// int main()
// {
//     for (int i = 0;i <=10;i++)
//     {
//         cout << i;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int num = 0;

    cout << "Enter a Number..: " << endl;
    cin>> num;

    for ( int i = 0;i<=10;i++)
    {
        cout << endl << num << "*" << i << "=" << num * i;
    }
    
    return 0;
}

