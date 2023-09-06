#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    // for 2 for loop will not run
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n = 5;
    int c = 0;

    for (int i = 0; i < n; i++)
    {
        if (isPrime(i))
        {
            c++;
            cout << i << endl;
        }
    }
    cout << c << endl;
    return c;
}