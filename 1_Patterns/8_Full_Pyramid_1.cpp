#include <iostream>
using namespace std;

int main()
{
    int i = 9;
    // cin >> i;
    for (int row = 0; row < i; row++)
    {
        for (int col = 0; col < i - (row + 1); col++)
        {
            cout << " ";
        }
        for (int col = 0; col < (row + 1); col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}