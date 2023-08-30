#include<iostream>
#include <climits>
#include<vector>
using namespace std;

int getMax(int arr[][3], int rows, int cols){
    int max = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }
    cout << max << " is the largest number in array";
}

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int cols = 3;

    getMax(arr,rows,cols);
    return 0;
}