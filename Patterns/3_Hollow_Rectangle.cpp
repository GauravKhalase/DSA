#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    int j = 8;
    for (int row = 0; row < i; row++)
    {
        if (row == 0 || row == i - 1)
        {
            for (int col = 0; col < j; col++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";
            for (int col = 0; col < j - 2; col++)
            {
                cout << "  ";
            }
            cout << "* ";
        }

        cout << endl;
    }
}
