#include <iostream>
using namespace std;

int sum()
{
    int n;
    cout << "Enter the number:" << endl;
    cin >> n;
    int sum = 0;
    for (int i = 2; i <= n; i = i + 2)
    {
        sum = sum + i;
    }
    cout << sum << endl;
}

int main()
{
    sum();
    cout << "action completed";
}