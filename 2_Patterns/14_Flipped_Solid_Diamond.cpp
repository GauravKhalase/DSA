#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    for (int row = 0; row < i; row++)
    {
        for (int col = 0; col < i - row; col++)
        {
            cout << "*";
        }
        for (int col = 0; col < 2 * row + 1; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < i - row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int row = 0; row < i; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }
        for (int col = 0; col < i * 2 - 2 * row - 1; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}