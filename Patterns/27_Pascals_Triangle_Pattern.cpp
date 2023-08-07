#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i <=n; i++)
    {
        int C = 1;
        for (int j = 1; j < i + 1; j++)
        {
            cout << C << " ";
            C = C * (i - j) / j;
        }
        cout << endl;
    }
}