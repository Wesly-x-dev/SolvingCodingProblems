// Write a function that calculates the factorial of a number using recursion.

#include <iostream>
using namespace std;
int factVal = 1;
int factorial(int val)
{
    for (int i = 1; i < val + 1; i++)
    {
        return factVal *= i;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    cout << factorial(5);
    return 0;
}
