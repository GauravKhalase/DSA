#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int firstOccurence(vector<int> v, int target)
{
    int start = 0;
    int end = v.size()-1;
    // int mid = (start + end) / 2;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        int element = v[mid];
        if (element == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (target < element)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        // mid = (start + end) / 2;
        mid = start + (end - start) / 2;
    }
    return ans;
}
 
int main()
{
    vector<int> v{1,3,4,4,4,4,5,6};
    int target = 4;

    // using code
    int ans1 = firstOccurence(v, target);
    cout << "first occurence of " << target << " is at index " << ans1<<endl;

    // using in-built function
    // lower_bound
    auto ans2 = lower_bound(v.begin(),v.end(),target);
    cout << "first occurence of " << target << " is at index " << ans2-v.begin()<<endl;

    // upper_bound
    auto ans3 = upper_bound(v.begin(),v.end(),target);
    cout << "last occurence of " << target << " is at index " << (ans3-v.begin()-1)<<endl;

    return 0;
}