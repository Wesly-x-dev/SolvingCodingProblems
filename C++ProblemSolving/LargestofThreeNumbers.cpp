// Find the largest of three numbers using if-else.

#include <iostream>
using namespace std;

int val1;
int val2;
int val3;

int LargestVal(int a, int b, int c)
{
    if (a > b and a > c)
    {
        cout << a << " is the largest value";
    }
    else if (b > a and b > c)
    {

        cout << b << " is the largest value";
    }
    else
    {
        cout << c << " is the largest value";
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    cout << "Type the numbers to find the largest among them!" << endl;
    cout << "Value 1: ";
    cin >> val1;
    cout << "Value 2: ";
    cin >> val2;
    cout << "Value 3: ";
    cin >> val3;

    LargestVal(val1, val2, val3);
    return 0;
}
