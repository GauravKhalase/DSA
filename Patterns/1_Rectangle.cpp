#include <iostream>
using namespace std;

int main()
{
    int i = 3;
    int j = 5;
    for (int row = 0; row < i; row++)
    {
        for (int col = 0; col < j; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
