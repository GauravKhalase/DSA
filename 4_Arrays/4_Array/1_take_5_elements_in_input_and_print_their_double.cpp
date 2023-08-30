#include <iostream>
using namespace std;

int main()
{
    int arr[500];
    int n;
    cout << "How many numbers you want in array?" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Double:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << 2 * arr[i] << " ";
    }
}