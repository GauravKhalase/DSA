#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    for (int row = 0; row < i; row++)
    {
        for (int col = 0; col<i-row ; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}