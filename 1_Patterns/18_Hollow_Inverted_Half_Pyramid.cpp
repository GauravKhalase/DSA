#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    for (int row = 0; row < i; row++)
    {
        for (int col = 0; col < i - row; col++)
        {
            if (row == 0 || col == 0 || col == i - row - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}