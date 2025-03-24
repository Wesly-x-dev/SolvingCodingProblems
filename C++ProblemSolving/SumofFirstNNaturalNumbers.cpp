//Input a number N and print the sum of numbers from 1 to N.


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int val;
    int sum = 0;
    cout<<"Type the nth term to be added and printed out: ";
    cin>>val;

    for (int i = 1; i < val+1; i++)
    {
        sum += i;
        // cout<<sum<<endl;
    }
    cout<<"The sum upto "<<val<<" is : "<<sum<<endl;
    return 0;
}
