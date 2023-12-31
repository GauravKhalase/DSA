#include <iostream>
#include <vector>
using namespace std;

bool findKey(int arr[][3], int rows, int cols, int key)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == key){
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int cols = 3;
    int key = 5;

    findKey(arr, rows, cols, key);

    if (findKey(arr, rows, cols, key))
    {
        cout << key << " is presesnt in array";
    }
    else
    {
        cout << key << " is not presesnt in array";
    }

    return 0;
}