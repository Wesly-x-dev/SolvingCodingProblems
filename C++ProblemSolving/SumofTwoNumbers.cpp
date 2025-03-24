#include <iostream>
using namespace std;
// Take two integer inputs from the user and print their sum.
int a;
int b;

//function to add 2 numbers
int sum(int a, int b)
{
    cout << "The sum of " << a << "+" << b << "=" << a + b << endl;
    return 0;
}

int main(int argc, char const *argv[])
{
    cout << "Type 1st digit to sum them up:    ";
    cin >> a;
    cout << "Type 2nd digit to sum them up:    ";
    cin >> b;
    sum(a, b);
    return 0;
}
