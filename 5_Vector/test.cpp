#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << (0 ^ 0) << endl;
    cout << (0 ^ 1) << endl;
    cout << (1 ^ 0) << endl;
    cout << (1 ^ 1) << endl;
    cout << (1 ^ 2) << endl;    // 3
    cout << (3 ^ 6) << endl;    // 5
    cout << (5 ^ 1) << endl;    // 4
    cout << (4 ^ 2) << endl;    // 6
}