#include <iostream>
using namespace std;

bool find(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
            break;
        }
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int key;
    cin >> key;
    int size = 5;
    if (find(arr, size, key))
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }
}