#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int i = 1;
    int j = 1;
    for (int row = 0; row < n; row++)
    {

        for (int col = 0; col < row + 1; col++)
        {
            cout << i;
            i = i + 1;
            if (col != row)
            {
                cout << "*";
            }
        }

        cout << endl;
    }
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << j;
            j = j + 1;
            if (col != row)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}