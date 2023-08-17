#include <iostream>
using namespace std;

int maxNum(int a, int b, int c)
{
    if (a > b & a > c)
    {
        cout << a;
    }
    else if (b > a & b > c)
    {
        cout << b;
    }
    else
    {
        cout << c;
    }
}

int main()
{
    int a = 18, b = 15, c = 20;
    maxNum(a, b, c);
    cout <<endl<< "action completed";
}