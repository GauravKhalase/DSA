#include <iostream>
using namespace std;

int count()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
}

int main()
{
    count();
    cout << "action completed";
}