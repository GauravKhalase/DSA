#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> v, int target)
{
    int s = 0;
    int e = v.size() - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (v[mid] == target)
        {
            return mid;
        }
        if (mid - 1 >= s && v[mid - 1] == target)
        {
            return mid - 1;
        }
        if (mid + 1 <= e && v[mid + 1] == target)
        {
            return mid + 1;
        }
        if (v[mid] < target)
        {
            s = mid + 2;
        }
        if (v[mid] > target)
        {
            e = mid - 2;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    vector<int> v{10, 3, 40, 20, 50, 8, 70};
    int target = 70;

    int ans = binarySearch(v, target);
    if (ans == -1)
    {
        cout << "target not found";
    }
    else
    {
        cout << "target found at index " << ans;
    }

    return 0;
}