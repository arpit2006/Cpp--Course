//Arrays Defination --> Continous memory blocks.
//Array is used to store multiple values in a single variable instead of declaring seprate varialbe for each value.
//Arrays are used to store collection of data, like roll no, names, marks etc.
//Arrays are used to store collection of objects.
//Arrays are used to store collection of strings.
//Arrays are used to store collection of boolean values.
//Arrays are used to store collection of integer values.
//Arrays are used to store collection of float values.
//How to access elements in an array
//Accessing elements in an array is done by using index number.
//Index number is a number that is used to access a particular element in an array.
//Index number starts from 0 and ends at n-1 where n is the number of elements
//in the array.

//How to declare an array in C++
//Array is declared using the keyword array.
//Array is declared using the keyword int.
//Array is declared using the keyword float.
//Array is declared using the keyword double.
//Array is declared using the keyword char.
//Array is declared using the keyword bool.

//How to initialize an array in C++
//Array is initialized using the keyword array.
//Array is initialized using the keyword int.
//Array is initialized using the keyword float.
//Array is initialized using the keyword double.
//Array is initialized using the keyword char.
//Array is initialized using the keyword bool.
//How to access elements in an array in C++
//Accessing elements in an array is done by using index number.



#include<iostream>
using namespace std;
int main()
{
    string names[3] = {"Arpit","Utkarsh","Sumedh"};
    for (int i = 0;i <= 3;i++)
    {
        cout << names[i] << endl;
    }
    return 0;
}



