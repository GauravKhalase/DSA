#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int row = 0; row < n; row++)
    {
        int col;
        for (col = 0; col < row + 1; col++)
        {
            cout << col + 1;
        }
        // col = col - 1;
        // reverse
        for (col=row; col >= 1; col--)
        {
            cout << col;
        }

        cout << endl;
    }
}