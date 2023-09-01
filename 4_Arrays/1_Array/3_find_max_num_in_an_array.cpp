#include <iostream>
#include <climits> // for INT_MIN
using namespace std;

int main()
{
    int arr[] = {1, 2, 8, 4, 5};
    int size = 5;
    int maxNum = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxNum)
        {
            maxNum = arr[i];
        }
    }
    cout << "Maximum number in array is: " << maxNum;
}