//Method 1
// We can do it by both method but m2 is fast than m1

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string firstname = "Arpit";
    string lastname = "Shirbhate";

    string fullname = firstname + lastname;
    cout << fullname << endl; 
    return 0;
}

//Method 2 (Fast Method)
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string firstname = "Arpit";
    string lastname = "Shirbhate";

    string fullname = firstname.append(lastname);
    cout << fullname << endl; 
    return 0;
}


#include<iostream>
#include<string>
using namespace std;
int main()
{
    string num1 = "10"; //data type str
    string num2 = "20";

    string total = num1 + num2;
    cout << total << endl; //output 1020
    //compiler will read it as string
    return 0;
}

// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     string num1 = "10";
//     int num2 = "20"; // concatination is only possible in str + str

//     string total = num1 + num2; // Not allowed 
//     cout << total << endl; //Error
//     return 0;
// }