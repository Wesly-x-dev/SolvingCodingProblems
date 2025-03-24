#include <iostream>
using namespace std;

int h;
int b;

int AreaOfRectangle(int height, int base){
    cout<<"The area of the rectangle with base="<<base<<" and height="<<height<<" is, "<<0.5*height*base<<endl;
    return 0;
}


int main(int argc, char const *argv[])
{
    cout<<"Type the base and height to calculate the area of rectangle"<<endl;
    cout<<"Height=";
    cin>>h;
    cout<<"Base=";
    cin>>b;
    AreaOfRectangle(h, b);
    return 0;
}
