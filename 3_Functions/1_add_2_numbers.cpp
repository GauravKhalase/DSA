#include <iostream>
using namespace std;

int add(int a, int b)
{
    int sum = a + b;
    cout << sum << endl;
    return sum;
}

int main()
{
    int a = 12, b = 15;
    add(a, b);
    cout << "action completed";
}