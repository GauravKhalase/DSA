#include <iostream>
#include "assert.h"
using namespace std;

int main()
{
    int n = 5;
    assert(n<=9);
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < 2 * n - row - 2; col++)
        {
            cout << "*";
        }
        for (int col = 0; col < row + 1; col++)
        {
            cout << row + 1;
            if (col != row)
            {
                cout << "*";
            }
        }
        for (int col = 0; col < 2 * n - row - 2; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}