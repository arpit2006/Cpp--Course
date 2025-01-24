//Break 
// Break  to stop the loop. It is used to terminate the loop when a certain condition is met.
//Break is use to jump out of the BLOCK

//Continue
// Continue --> to skip the current iteration and move to the next one.
//Continue is udes to jump out of ITERATION

#include<iostream>
using namespace std;
int main()
{
    for (int i = 0;i <=5;i++)
    {
    if ( i == 4)
        break;
    cout << i << endl;
    }
    
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    for (int i = 0;i <=10;i++)
    {
    if ( i == 4)
        continue;;
    cout << i << endl;
    }
    
    return 0;
}