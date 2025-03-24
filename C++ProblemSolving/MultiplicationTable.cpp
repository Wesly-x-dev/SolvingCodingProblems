//Print the multiplication table of a number given by the user.
#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int val;
    cout<<"Multiplication Table for: ";
    cin>>val;
    cout<<"The time table for "<<val<<endl;
    for (int i = 0; i < 11; i++)
    {
        cout<<val<<" * "<<i<<" = "<<val*i<<endl;
    }
    
    return 0;
}
