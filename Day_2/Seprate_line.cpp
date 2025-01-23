// There are two type of method to print line in mext line
//1) \n --> It is Used in the Middle of the sentence.(Looks Ugly)
//2)endl --> It is Used at the end of the code.(Looks Professional)
#include <iostream>
using namespace std;
int main()
{
    cout<<"Hello"<<endl << "World";
    
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    cout<<"Hello \n World";
    return 0;
}