#include <iostream>
using namespace std;
int value;

int EvenOdd(int val){
    //the % is used to find the reminder
    if (val % 2 == 0){
        cout<<val<<" is Even!";
    }
    else{
        cout<<val<<" is odd!";
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    cout<<"Type the value for identification of Even or odd:";
    cin>>value;
    EvenOdd(value);
    return 0;
}
