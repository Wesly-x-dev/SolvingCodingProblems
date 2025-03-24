//Take two numbers and an operator (+, -, *, /) as input and perform the operation.

#include <iostream>
using namespace std;

int val1;
int val2;
string c;

int calculator(int a, int b, string c){
    if (c == "+"){
        cout<<"calculated value is "<<(float)a + b;
    }
    else if(c == "-"){
        cout<<"calculated value is "<<(float)a - b;
    }
    else if(c == "*"){
        cout<<"calculated value is "<<(float)a * b;
    }
    else if(c == "/"){
        cout<<"calculated value is "<<(float)a / b;
    }
    else{
        cout<<"There is either invalid symbols or value error!, try again!";
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    cout<<"Type the values and symbols to determine the value calculated (simple calculator)!"<<endl;
    cout<<"Value1: ";
    cin>>val1;
    cout<<"Symbol: ";
    cin>>c;
    cout<<"Value2: ";
    cin>>val2;
    calculator(val1, val2, c);
    
    return 0;
}
